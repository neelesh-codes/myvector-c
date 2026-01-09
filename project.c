#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


int main(int argc, char const *argv[])
{
    Vector *v = create_vector(5);

    insert(v, 13, 0);
    insert(v, 67, 1);
    insert(v, 89, 2);
    insert(v, 90, 3);
    insert(v, 74, 4);

    // v->data[2] = 58;

    for(int i = 0; i < 5; i++){
        printf("%d ", v->data[i]);
    }
    printf("\n");

    Vector* nv = copy_vector(v);

    for(int i = 0; i < 5; i++){
        printf("%d ", nv->data[i]);
    }
    printf("\n");

    return 0;
}
