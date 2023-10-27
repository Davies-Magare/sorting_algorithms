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
void quick_sort(int *array, size_t size);
void sort_array(int *array, int low, int high, size_t size);
void q_sort(int *array, int low, int high, unsigned int size);
int partition(int *array, int low, int high, unsigned int size);
void swap(int *array, int i, int j, unsigned int size);

#endif
