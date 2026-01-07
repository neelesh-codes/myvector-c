#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


int main(int argc, char const *argv[])
{
    Vector *v = create_vector(2);

    insert(v, 13, 0);
    insert(v, 67, 1);

    // v->data[2] = 58;

    for(int i = 0; i < 3; i++){
        printf("%d ", v->data[i]);
    }

    return 0;
}
