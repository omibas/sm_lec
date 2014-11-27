#include<stdio.h>
#include<unistd.h>
int main(){
    int i=0,n;
    scanf("%d",&n);
   while(i<n){
        printf("*");
        i++;
    }
   for(i=1;i<=10;i++){
       sleep(1);
       fflush(stdout);
       printf("\0");
}
    printf("\n");

    return 0;
}
