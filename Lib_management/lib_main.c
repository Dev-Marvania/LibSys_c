#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    char author[50];
    char isbn[20];
    float price;
    int available;
} Book;

typedef struct {
    char username[50];
    char password[50];
} staff_acc;

typedef struct {
    char name[50];
    char contact[20];
    char book_isbn[20];
} Member;

