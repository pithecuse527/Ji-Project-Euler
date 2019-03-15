#include <stdio.h>
#include <string.h>
//#include <math.h>

#define MAX_STR_LEN 500

double myPow(int base, int exp);

main()
{
    int res = 0;
    double x = myPow(2, 1000);
    char str_x[MAX_STR_LEN];    // since using fmod has a problem, 
                                // use string to calculate the sum of its digits
    
    // while(x > 0)
    // {
    //     res += fmod(x, 10);
    //     x /= 10;
    // }
    
    snprintf(str_x, MAX_STR_LEN, "%.0lf", x);
    char *str_x_ptr = str_x;
    
    while(*str_x_ptr)
    {
        res += *str_x_ptr - '0';
        str_x_ptr++;
    }
    
    printf("%d\n", res);

    
}

double myPow(int base, int exp)
{
  if (exp == 0) return 1;
  if (exp == 1) return base;
  if (exp == 2) return base * base;

  int half_exp = exp / 2;
  int rest_exp = exp % 2;
  double res = myPow(base, half_exp) * myPow(base, half_exp) * myPow(base, rest_exp);

  return res;

}