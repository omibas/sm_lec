#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int n;
  double a=2.0,b=4.0;
  double y; 
   
  scanf("%d",&n);
  
  for(i=0 ; i <= n; i++){
      
     y = sin((a+b)/2.0);
     printf("%lf\n",y);
     if(y<0) b = (a+b)/2.0;     
     if(y>0) a = (a+b)/2.0;
  }
  printf("%lf\n",a);
  printf("%lf\n",b);
  
}
