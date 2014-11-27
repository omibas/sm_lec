#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int n;
  double x;
  double sum = 0; 
   
  scanf("%d",&n);
  
  for(i=0 ; i < n; i++){
      x = (double)i/n;
      sum += ( sqrt(1.0-x*x) + sqrt(1.0-(x+1.0/n)*(x+1.0/n)) ) / 2.0 / n;
  }
  printf("%lf",sum*4.0);
  
}
