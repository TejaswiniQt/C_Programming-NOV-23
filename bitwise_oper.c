#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int res_and, res_or, res_xor, max_or = 0, max_and = 0, max_xor = 0;
  if(n >= 2 && n <= 10^3 && k >= 2 && k <= n)
  {
  for(int i = 1;i < n;i++)
  {
      for(int j = i+1;j <= n;j++)
      {
          res_and = i & j;
          res_or = i | j;
          res_xor = i ^ j;
          if(res_and > max_and && res_and < k)
          {
              max_and = res_and;
          }
          if(res_or > max_or && res_or < k)
          {
              max_or = res_or;
          }
          if(res_xor > max_xor && res_xor < k)
          {
              max_xor = res_xor;
          }
      }
  }
  }
  printf("%d\n", max_and);
  printf("%d\n", max_or);
  printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
