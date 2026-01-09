#include "vector.h"

Vector *create_vector(int size)
{
    // Reserved space in memory for vec;
    Vector *vec = (Vector *)malloc(sizeof(Vector));

    vec->size = size;
    vec->capacity = size + 4; // Default capacity
    vec->data = (int *)malloc(vec->capacity * sizeof(int));

    if (!vec->data)
    {
        printf("Not able to reserve memeory! for data");
    }

    return vec;
}

Vector *insert(Vector *vec, int item, unsigned int index)
{
    vec->data[index] = item;

    if (!vec->data)
    {
        printf("Not able to reserve memeory! for data");
    }

    return vec;
}

Vector *copy_vector(Vector *vec)
{
    Vector *new_vec = vec;
    new_vec->size = vec->size;
    new_vec->capacity = vec->capacity;

    int j = 0;
    for (int i = 0; i < vec->size; i++)
    {
            new_vec->data[i] = vec->data[i];
    }

    return new_vec;
}