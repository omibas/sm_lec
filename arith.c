#include<stdio.h>
int main(){
  int m,n = 0;
  int a,b,c,d;
  scanf("%d %d",&m,&n);
  a = m+n;
  b = m-n;
  c = m*n;
  d = m/n;
  printf("%lx %lx %lx %lx\n",a,b,c,d);

}
