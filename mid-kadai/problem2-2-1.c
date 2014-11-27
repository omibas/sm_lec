#include<stdio.h>

int max2(int a,int b);
int max3(int a,int b,int c);

int main(){
    int m,n,l;
    int result;
    scanf("%d %d %d",&m,&n,&l);
    result = max3(m,n,l);
    printf("%d\n",result);

    return 0;
}

int max2(int a,int b){
    int max;
    if(a > b){
        max = a;   
    }else{
        max = b;
    }
    
    return max;
}
int max3(int a,int b,int c){
    int max;
    max =  max2(a,b);
    max = max2(max,c);
    return max;
}
