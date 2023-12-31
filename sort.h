#ifndef SORT_H
#define SORT_H

/* -------- C libraries -------- */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1

/* -------- Data structures ------- */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Functions prototype */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_nodes(listint_t **list, listint_t *n1, listint_t *n2);
void swap(int *x, int *y);
void q_sort_recursive(int *array, size_t start, size_t end, size_t size);
size_t lomutoPartition(int *array, size_t start, size_t end, size_t size);
int _swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
int get_max(int *array, int size);
void merge(int *array, int *temp, int left, int mid, int right);
void merge_sort_recursive(int *array, int *temp, int left, int right);
void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void radix_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_sort(int *array, size_t size);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

#endif
