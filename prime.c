#include<stdio.h>
int main(){
  int m,n,p =0;
  long i =0;
  for(m = 2;m <= 1000; m++){
    for(n = 2; n <= m ;n++){
      if(n*n>m){
	p = m;
	printf("%d\n",p);
	break;
      }
      if(m%n == 0){
	i++;
	break;
      }
      i++;
    }
  }

  printf("%ld\n",i);


  return 0;
}
