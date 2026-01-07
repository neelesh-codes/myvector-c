#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int *data;
    size_t size;
    size_t capacity;
} Vector;

Vector *create_vector(int size);
Vector *insert(Vector* vec,int item, unsigned int index);