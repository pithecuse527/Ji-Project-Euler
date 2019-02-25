#include <stdio.h>

typedef enum boolean{False=0, True} Boolean;

Boolean isItPrime(int x);
int findPrimeOfOrder(int order);

main()
{
    int rs = findPrimeOfOrder(10001);
    
    printf("%d\n", rs);
    
}

Boolean isItPrime(int x)
{
    if (x == 1) return False;    

    int i;
    
    for(i = 2; i < x; i++)
        if ( !(x % i) ) return False;
    return True;
    
}

int findPrimeOfOrder(int order)
{
    int i = 1;
    int count = 0;
    
    while(count != order)
    {
        i++;
        if(isItPrime(i)) count++;
    }
    
    return i;
    
}