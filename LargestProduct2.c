#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 20
#define COL 20
#define MAX_STR_LEN 100
#define TRUE 1
#define FALSE 0

int doRightProd(int lst[][COL]);        // The direction of product : →     The direction of next product : →
int doDownProd(int lst[][COL]);         // The direction of product : ↓     The direction of next product : →
int doRightDiagProd(int lst[][COL]);    // The direction of product : ↘     The direction of next product : →
int doLeftDiagProd(int lst[][COL]);     // The direction of product : ↖     The direction of next product : ←

main()
{
    int i, j, count, res;
    int lst[ROW][COL];
    char s[MAX_STR_LEN];
    char *tmp;
    
    
    // ------------------------- Pull from txt file ------------------------- //
    
    FILE *rf = fopen("ext/numbers.txt", "r");
    i = 0;
    j = 0;
    
    while(TRUE)
    {
        fgets(s, MAX_STR_LEN, rf);
        if(feof(rf)) break;
        s[strlen(s) - 2] = '\0';
        
        tmp = strtok(s, " ");
        lst[i][j++] = atoi(tmp);
        
        while(TRUE)
        {
            tmp = strtok(NULL, " ");
            if(!tmp) break;
            lst[i][j++] = atoi(tmp);
        }
        
        i++;
        j = 0;
        
    }
    
    // ---------------------------------------------------------------------- //
    
    res = doRightProd(lst);
    printf("%d\n\n", res);
    res = doRightDiagProd(lst);
    printf("%d\n\n", res);
    res = doLeftDiagProd(lst);
    printf("%d\n\n", res);
    res = doDownProd(lst);
    printf("%d\n\n", res);
    
}

int doRightProd(int lst[][COL])
{
    int i, j, k;
    int max = 0;
    int res = 1;
    
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL-3; j++)
        {
            for(k = 0; k < 4; k++) res *= lst[i][j+k];
            if(res > max) max = res;
            res = 1;
        }
    }
    
    return max;
}

int doDownProd(int lst[][COL])
{
    int i, j, k;
    int max = 0;
    int res = 1;
    
    for(i = 0; i < ROW-3; i++)
    {
        for(j = 0; j < COL; j++)
        {
            for(k = 0; k < 4; k++) res *= lst[i+k][j];
            if(res > max) max = res;
            res = 1;
        }
    }
    
    return max;
}

int doRightDiagProd(int lst[][COL])
{
    int i, j, k;
    int max = 0;
    int res = 1;
    
    for(i = 0; i < ROW-3; i++)
    {
        for(j = 0; j < COL-3; j++)
        {
            for(k = 0; k < 4; k++) res *= lst[i+k][j+k];
            if(res > max) max = res;
            res = 1;
        }
    }
    
    return max;
}

int doLeftDiagProd(int lst[][COL])
{
    int i, j, k;
    int max = 0;
    int res = 1;
    
    for(i = 0; i < ROW-3; i++)
    {
        for(j = COL-1; j > 2; j--)
        {
            for(k = 0; k < 4; k++) res *= lst[i+k][j-k];
            if(res > max) max = res;
            res = 1;
        }
    }
    
    return max;
}