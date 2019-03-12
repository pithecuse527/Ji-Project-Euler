#include <stdio.h>
#include <math.h>

main()
{
    double res, add_to = 1;
    int div_cnt, i;
    
    while(div_cnt < 500)
    {
        div_cnt = 0;
        res = 0.5 * (1 + add_to) * add_to;
        
        for(i = 1; i <= sqrt(res); i++)
            if( fmod(res, i) == 0 ) div_cnt += 2;
        
        if(i == sqrt(res)) div_cnt++;
        
        add_to++;
    }
    
    printf("%lf\n%lf\n", res, add_to);
    
}
