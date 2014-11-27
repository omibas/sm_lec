#include<stdio.h>

int max(int a,int b);
int main(){
    int m,n;
    int result;
    scanf("%d %d",&m,&n);
    result = max(m,n);
    printf("%d\n",result);

    return 0;
}

int max(int a,int b){
    int max;
    if(a > b){
        max = a;   
    }else{
        max = b;
    }
    
    return max;
}
