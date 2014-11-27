#include<stdio.h>
int main(){
    int n=0;
    int sum=0;
    while(sum + (n+1)*(n+1)<1000000){
        n++;        
        sum += n*n;
        
}

    printf("NUM:%d SUM:%d",n,sum);



    return 0;
}
