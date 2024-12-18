#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Structure for doubly linked list */
typedef struct listint_s
{
    int n;  /* Remove const, as n needs to be modifiable */
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Prototypes */
listint_t *create_listint(const int *array, size_t size);  /* Add the declaration */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif /* SORT_H */
