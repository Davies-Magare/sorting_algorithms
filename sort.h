#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);
void print_arr(int *array, int size);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
size_t find_smallest(int *array, size_t size, size_t smallest);


#endif
