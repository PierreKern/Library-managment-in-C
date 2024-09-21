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
        fprintf(stderr, "Livre non trouvé\n");
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

int main(int argc, char *argv[])
{
    return 0;
}
