/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** main
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

book_t *create_book(int id, char *author, char *title)
{
    book_t *new_book = (book_t *)malloc(sizeof(book_t));

    new_book->id = id;
    strcpy(new_book->author, author);
    strcpy(new_book->title, title);
    new_book->next = NULL;
    return new_book;

}

void add_book(book_t **library, int id, char *author, char *title)
{
    book_t *new_book = create_book(id, author, title);
    new_book->next = *library;
    *library = new_book;
}

void display_book(book_t *library)
{
    book_t *current = library;

    while (current != NULL) {
        printf("Book id: %d\nBook title : %s\nBook author: %s\n", current->id, current->title, current->author);
        current = current->next;
    }
}

book_t *find_book(book_t *library, int id)
{
    book_t *current = library;

    while (current != NULL) {
        if (id == current->id) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

book_t *delete_book(book_t **library, int id)
{
    book_t *current = *library;
    book_t *previous = NULL;

    while (current != NULL && current->id != id) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        fprintf(stderr, "Book not found.\n");
        return NULL;
    }
    if (previous == NULL) {
        *library = current->next;
    } else {
        previous->next = current->next;
    }
    free(current);
    printf("Book deleted.\n");
}

void clear_input_buffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    book_t *library = NULL;
    int choice = 0;
    int id;
    char title[100];
    char author[100];

    while (1) {
        printf("1: Add a book\n2: Display books\n3: Find a book by ID\n4: Delete a book\n5: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice) {
        case 1:
            printf("Enter book's ID: ");
            scanf("%d", &id);
            clear_input_buffer();
            printf("Enter book's title: ");
            fgets(title, sizeof(title), stdin);
            title[strcspn(title, "\n")] = '\0';
            printf("Enter book's author: ");
            fgets(author, sizeof(author), stdin);
            author[strcspn(author, "\n")] = '\0';
            add_book(&library, id, author, title);
            break;
        
        case 2:
            display_book(library);
            break;

        case 3:
            printf("Enter book's ID to find: ");
            scanf("%d", &id);
            clear_input_buffer();
            book_t *found = find_book(library, id);
            if (found) {
                printf("Found book -> ID: %d, Title: %s, Author: %s\n", found->id, found->title, found->author);
            } else {
                printf("Book not found.\n");
            }
            break;

        case 4:
            printf("Enter book's ID to delete: ");
            scanf("%d", &id);
            clear_input_buffer();
            delete_book(&library, id);
            break;

        case 5:
            printf("Exiting...\n");
            while (library != NULL) {
                book_t *temp = library;
                library = library->next;
                free(temp->author);
                free(temp->title);
                free(temp);
            }
            return(0);

        default:
            printf("Invalid choice, please try again.\n");
            break;
        }
    }
    return 0;
}