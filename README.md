# Library Management System

This is a simple **Library Management System** implemented in C, using structures and linked lists. The program allows you to create, add, display, search, and delete books in a library.

## Features

- Add new books to the library.
- Display all books in the library.
- Search for a book by its ID.
- Delete a book by its ID.

## Data Structure

The books in the library are represented as nodes in a singly linked list. Each node contains the following information:
- `id`: Unique identifier for each book.
- `title`: Title of the book.
- `author`: Author of the book.
- `next`: Pointer to the next book in the list.

The program uses dynamic memory allocation for creating new books and managing the list.

## Download and install the project

    git clone git@github.com:PierreKern/Library-managment-in-C.git
    cd Library-managment-in-C
    make
    ./library

## Example Usage

Here is an example of how to use the library management system:

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    
    int main(void) 
    {
        book_t *library = NULL;
        
        add_book(&library, 1, "Robin Williams", "How to Make a Million Euros");
        add_book(&library, 2, "Isaac Asimov", "Foundation");
        add_book(&library, 3, "George Orwell", "1984");
        printf("All books in the library:\n");
        display_books(library);
        book_t *book = find_book(library, 2);
        if (book != NULL) {
            printf("\nFound book: %s by %s\n", book->title, book->author);
        } else {
            printf("\nBook not found.\n");
        }
        printf("\nDeleting book with ID 2.\n");
        delete_book(&library, 2);
        printf("\nBooks after deletion:\n");
        display_books(library);
        return 0;
    }

## TO-DO
-Make the programm interactive
