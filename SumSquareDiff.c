#include <stdio.h>

int calcSquareSum(int x);
int calcSum(int x);
int square(int x);

main()
{
    int rs1 = calcSquareSum(100);
    int rs2 = square(arithmeticProgressionSum(100));
    

    printf("%d %d %d\n", rs1, rs2, rs2 - rs1);
    
}

int calcSquareSum(int x)
{
    int i, sum = 0;
    
    
    for(i = 1; i <= x; i++)
    {
        sum += square(i);
    }
    
    return sum;
    
}

int arithmeticProgressionSum(int x)
{
    
    return (1 + x) * x / 2;
}

int square(int x)
{
    return x * x;
}