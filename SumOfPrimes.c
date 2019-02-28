#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum boolean{False=0, True} Boolean;
Boolean thisIsPrime(double x);

main()
{
    int i;
    double sum = 0;
    
    for(i = 2; i < 2000000; i++)
        if(thisIsPrime(i))
        {
            //printf("%d\n", i);
            sum += i;
        }
        
    printf("%lf\n", sum);
}

Boolean thisIsPrime(double x)
{
   long i;
   
   for(i = 2; i <= sqrt(x); i++)
    if (!fmod(x,i)) return False;
    
   return True;

}