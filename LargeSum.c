#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_STR_LEN 100

main()
{
    int i = 0;
    int j = 0;
    double tmp, res = 0;
    char s[MAX_STR_LEN];
    
    // ------------------------- Pull from txt file ------------------------- //
    
    FILE *rf = fopen("ext/numbers2.txt", "r");
    
    while(TRUE)
    {
        fgets(s, MAX_STR_LEN, rf);
        if(feof(rf)) break;
        s[strlen(s) - 1] = '\0';        // remove following things
        
        tmp = atof(s);
        res += tmp;
    
    }
    
    // ---------------------------------------------------------------------- //
    
    printf("%lf\n", res);
   
}