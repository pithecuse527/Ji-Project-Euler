#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum boolean{False=0, True} Boolean;

void findFactor(double from, double x);
Boolean primeCheck(double x);

main()
{
    printf("Start!\n");
    findFactor(5 ,600851475143);
    printf("End!\n");

}

void findFactor(double from, double x)
{
    while(from++ <= x)
    {
        if ( !fmod(x, from) )
            if (primeCheck(from))
                printf("%lf\n", from);
    }
    printf("\n");
}

Boolean primeCheck(double x)
{
   long i;

   for(i = 2; i < sqrt(x); i++)
    if (!fmod(x,i)) return False;
   return True;

}
