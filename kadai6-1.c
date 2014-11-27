#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int n;
  double x,y;
  double d; /*原点からの距離*/
  int inside; /*円の内側の点の数*/
  
  scanf("%d",&n);
  
  inside = 0;
  for(i=0; i<n; i++){
      x = rand()/(RAND_MAX + 1.0);
      y = rand()/(RAND_MAX + 1.0);
      d = x*x + y*y;
      if( 1 >= d){
          inside++;
      }


  }
  printf("%lf",inside*4.0/n);
  
}
