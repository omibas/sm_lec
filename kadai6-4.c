#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int n;
  double s=1.0;
  double y; 
   
  scanf("%d",&n);
  
  for(i=1 ; i <= n; i++){
      s = sqrt(2.0-sqrt(4.0-s*s));      
  }
  printf("%lf\n",s*6*pow(2.0,n-1.0));
 
  
}
