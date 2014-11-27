#include<stdio.h>
int main(){
    int n;
    int i;
    int f = 0;
    for(i=1;i <=1000;i++){
        for(n=1 ; n*n < i ; n++){
            if(i%n==0){
                f = 1;
            }
        }    
        if(f == 0){
            printf("%d\n",i);
        }
        f =0;        
        
        
        
    }


    return 0;
}
