# Library Management System

This is a simple library management system written in C. It allows staff to manage books and members in a library. The system includes functionalities for staff login, adding books, deleting books, fetching book details, displaying all books, creating members, issuing books to members, displaying issued books, and returning books.

## Features

1. **Staff Account Management**
   - Create a new staff account
   - Staff login

2. **Book Management**
   - Add a new book
   - Delete a book
   - Fetch book details by name or author
   - Display all books

3. **Member Management**
   - Create a new member
   - Issue a book to a member
   - Display issued books
   - Return a book

## Files

- `lib_main.c`: The main source code file containing all the functions and the main program logic.

## How to Use

1. **Compile the Program**
   - Use a C compiler to compile the `lib_main.c` file. For example, using GCC:
     ```sh
     gcc lib_main.c -o library_management
     ```

2. **Run the Program**
   - Execute the compiled program:
     ```sh
     ./library_management
     ```

3. **Follow the Menu**
   - The program will display a menu with various options. Enter the corresponding number to perform the desired action.

## Example Usage

1. **Create Staff Account**
   - Select option `1` from the main menu to create a new staff account.

2. **Staff Login**
   - Select option `2` from the main menu to login as staff. After successful login, you can access book and member management functionalities.

3. **Add a Book**
   - After logging in, select option `1` from the staff menu to add a new book.

4. **Delete a Book**
   - After logging in, select option `2` from the staff menu to delete a book by its ISBN.

5. **Fetch Book Details**
   - After logging in, select option `3` from the staff menu to fetch book details by name or author.

6. **Display All Books**
   - After logging in, select option `4` from the staff menu to display all books.

7. **Create Member**
   - After logging in, select option `5` from the staff menu to create a new member.

8. **Issue Book**
   - After logging in, select option `6` from the staff menu to issue a book to a member.

9. **Display Issued Books**
   - After logging in, select option `7` from the staff menu to display all issued books.

10. **Return Book**
    - After logging in, select option `8` from the staff menu to return a book.

11. **Logout**
    - Select option `9` from the staff menu to logout.

12. **Exit Program**
    - Select option `3` from the main menu to exit the program.

## Notes

- The program stores staff accounts in `staff_log.txt`, books in `books.txt`, and members in `members.txt`.
- Ensure these files are in the same directory as the executable when running the program.

## License

This project is licensed under the APACHE License.
