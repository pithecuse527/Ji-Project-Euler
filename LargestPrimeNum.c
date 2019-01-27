#include <stdio.h>

int* findFactor(int x);
int primeCheck(int x);

main()
{
    findFactor(10);
}

int* findFactor(int x)
{
    int i = 1;
    int count = 0;
    int *factors_ptr = malloc(sizeof(int));
    int *tmp = factors_ptr;
    
    while(i <= x)
    {
        if( !(x%i) )
        {
            *tmp = i;
            count++;
            factors_ptr = (int *)realloc(factors_ptr, count*sizeof(int));
            tmp++;
            *tmp = NULL;
        }
        i++;
    }
    
    printf("\n");
    i=0;
    
    while(i <= count)
    {
        printf("%d ", factors_ptr[i]);
        i++;
    }
    
    return factors_ptr;
}