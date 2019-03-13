#include <stdio.h>
#include <math.h>

int itIsEven(double n);
double collatzSeqCnt(double n);

main()
{
    double n = 1;
    double max_cnt = 0, tmp_cnt = 0, tmp_res = 0;
    
    while(n <= 1000000)
    {
        tmp_cnt = collatzSeqCnt(n);
        if(max_cnt < tmp_cnt)
        {
            max_cnt = tmp_cnt;
            tmp_res = n;
        }
        
        n++;
    }
    
    printf("%lf\n", tmp_res);
    
}

int itIsEven(double n)
{
    if(!fmod(n,2)) return 1;
    
    return 0;
}

double collatzSeqCnt(double n)
{
    double cnt = 0;
    
    while(1)
    {
        //printf("%3.0lf ", n);
        if (n == 1)
        {
            cnt++;
            break;
        }
        
        if (itIsEven(n)) n /= 2;
        else n = n*3 + 1;
        
        cnt++;
    }
    
    //printf("\n");
    
    return cnt;
    
}