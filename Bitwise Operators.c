#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int ar[1000],i,j,a,b,c,and=0,or=0,exor=0;
  for(i=0;i<n;i++)
  {
      ar[i]=i+1;
  }
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          a=ar[i] & ar[j];
          b=ar[i] | ar[j];
          c=ar[i] ^ ar[j];

          if(a<k)
          {
              if(a>and)
                 and=a;
          }
          if(b<k)
          {
              if(b>or)
                 or=b;
          }
          
          if(c<k)
          {
              if(c>exor)
                 exor=c;
          }
      }
  }
    printf("%d\n",and);
    printf("%d\n",or);
    printf("%d",exor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
