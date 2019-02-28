#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calc4Product(char *series_ptr);

main()
{
    char series[2000];
    scanf("%s", series);
    
    char *series_ptr = series;
    int i, len = 0;
    double max = 0, tmp = 0;

    while(*series_ptr)
    {
        len++;
        tmp = calc4Product(series_ptr);
        if( max < tmp )
        {
            max = tmp;
            for(i = 0; i < 13; i++) printf("%d", *(series_ptr+i)-'0');
            printf("\n");
        }
        series_ptr++;
    }
    
    printf("\n%lf\n", max);
    printf("%d\n", len);
    
}

double calc4Product(char *series_ptr)
{
    int i;
    double tmp, res = 1.0;
    
    for(i = 0; i < 13; i++)
    {
        tmp = *series_ptr - '0';        // invert into int
        if (tmp <= 0) return 0;         // this will handle end of the series and if there is 0 in 13-digits.
        res *= tmp;
        series_ptr++;
    }
    
    return res;
}