#include <stdio.h>

typedef enum boolean{False=0, True} Boolean;

main()
{
    Boolean find_smallest_multiple = False;
    int i, multiple = 100;
    
    while(!find_smallest_multiple)          // while it finds multiple that all the dividor from 2 to 20 can divide it.
    {
        for(i = 2; i < 21; i++)
        {
            if ( !(multiple % i) ) find_smallest_multiple = True;
            else        // if dividor can't divide multiple, then increase multiple and starts from the beginning again.
            {
                find_smallest_multiple = False;
                multiple++;
                break;
            }
        }
    }
    
    printf("%d\n", multiple);
    
}
