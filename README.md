# Library Management System

This is a simple **Library Management System** implemented in C, using structures and linked lists. The program allows you to create, add, display, search, and delete books in a library by reading the user input.

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
