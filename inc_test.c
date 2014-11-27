#include<stdio.h>

int main(){
    int n=1;
    int i;
    //scanf("%d",&n)
        for(i=0;i<10;i++){
            
            n =n*n++;
            printf("%d\n",n);
        }
    
    
    
    

    return 0;
}
