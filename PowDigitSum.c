#include <stdio.h>
#include <string.h>
#include <math.h>

double myPow(int base, int exp);

main()
{
    int res = 0;
    double x = myPow(2, 1000);
    
    while(x > 0)
    {
        res += fmod(x, 10);
        x /= 10;
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