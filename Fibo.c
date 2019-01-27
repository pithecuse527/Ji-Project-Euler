#include <stdio.h>

int fibo(int x, int y);

main()
{
    fibo(1,2);
}

int fibo(int x, int y)
{
    static int sum = 0;
    
    if (y >= 4000000)           // basis level of this recursion
    {
        printf("sum : %d\n", sum);
        return y;
    }
    
    printf("y : %d\n", y);
    
    if(!(y%2)) sum += y;
    
    fibo(y, x+y);       // do recursion
    
}