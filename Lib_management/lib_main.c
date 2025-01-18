#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[100];
    char author[50];
    char isbn[20];
    float price;
    int available;
} Book;

typedef struct
{
    char username[50];
    char password[50];
} staff_acc;

typedef struct
{
    char name[50];
    char contact[20];
    char book_isbn[20];
} Member;

// Function to create a new staff account
void create_staff_account()
{
    FILE *file = fopen("staff_log.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        exit(EXIT_FAILURE);
    }

    staff_acc staff_log;
    printf("Create username: ");
    scanf("%s", staff_log.username);
    printf("Create password: ");
    scanf("%s", staff_log.password);

    // Write the new staff account details to the file
    fprintf(file, "%s %s\n", staff_log.username, staff_log.password);
    fclose(file);
    printf("Staff account created successfully.\n");
}

// Function to handle staff login
int staff_login()
{
    FILE *file = fopen("staff_log.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 0;
    }

    char username[50], password[50];
    staff_acc staff_log;
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    // Check the entered credentials against the stored accounts
    while (fscanf(file, "%s %s", staff_log.username, staff_log.password) != EOF)
    {
        if (strcmp(username, staff_log.username) == 0 && strcmp(password, staff_log.password) == 0)
        {
            fclose(file);
            printf("Login successful.\n");
            return 1;
        }
    }

    fclose(file);
    printf("Invalid username or password.\n");
    return 0;
}

