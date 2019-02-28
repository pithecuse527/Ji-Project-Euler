#include <stdio.h>
#include <math.h>

main()
{
    int a, b, c;
    
    for(a = 1; a < 999; a++)
    {
        for(b = 1; b < 999; b++)
        {
            c = 1000 - a - b;
            if(pow(a, 2) + pow(b, 2) == pow(c, 2) && a < b && b < c)
                printf("%d %d %d %d\n", a, b, c, a*b*c);
        }
    }
    
}