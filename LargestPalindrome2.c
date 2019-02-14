#include <stdio.h>
#include <math.h>

typedef enum boolean{False=0, True} Boolean;
typedef enum state_by_expo{               // Express the status for mypow() basis level
    STATE_ONE,                      // using the C constant to make better code.
    STATE_ONLY_BASE,
    STATE_SQUARE
} State_by_expo;

int placeVal(int n);                // returns place value of n
Boolean palindromeCheck(int n);     // check whether it is palindrome or not

main()
{
    int i, j, largest=0;
    for(i=100; i<1000; i++)
    {
        for(j=100; j<1000; j++)
        {
            if(palindromeCheck(i*j))
                if (largest < i*j) largest = i * j;
        }
    }
    
    printf("!%d!\n", largest);
   
}

int placeVal(int n)
{
    int count = 0;
    
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;
}

Boolean palindromeCheck(int n)
{
    int i, place = placeVal(n);
    int separated[place];
    int tmp;
    
    for(i = 0; i < place; i++)
    {
        separated[i] = n % 10;
        n /= 10;
    }
    
    for(i = 0; i < place; i++)
    {
        tmp = (place-1)-i;
        if( separated[i] != separated[tmp] ) return False;
    }
    
    return True;
}