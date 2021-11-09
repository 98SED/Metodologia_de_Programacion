#include<stdio.h>

void intercambiar(int *a, int *b);

int main()
{
    int a = 200, b = 600, temporal = 0;

    intercambiar(&a, &b);

    return 0;

}

void intercambiar(int *ptr_arg1, int *ptr_arg2)
{

    int temporal = 0;

    temporal = *ptr_arg1;

    *ptr_arg1 = *ptr_arg2;

    *ptr_arg2 = temporal;
}