#include<stdio.h>
int main(){
  double n;
  scanf("%f",n);
  printf("%.3lf F is %.3lf C\n",n,5.0/9.0*(n-32));   
  printf("0 F is %f C\n", 5.0/9.0*(-32));
  printf("50 F is %f C\n", 5.0/9.0*(50-32));
  printf("100 F is %f C\n", 5.0/9.0*(100-32));
  
    return 0;
}
