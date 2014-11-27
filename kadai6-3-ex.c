#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int n;
  double x=2.0; 
   
  scanf("%d",&n);
  
  for(i=0 ; i <= n; i++){
      
      x = x-sin(x)/cos(x);
  }
  printf("%lf\n",x);
  
}
