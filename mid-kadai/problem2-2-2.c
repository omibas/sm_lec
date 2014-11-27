#include<stdio.h>
int max3(int a,int b,int c);

int main(){
    int m,n,l;
    int result;
    scanf("%d %d %d",&m,&n,&l);
    result = max3(m,n,l);
    printf("%d\n",result);

    return 0;
}

int max3(int a,int b,int c){
    int max;
    max = a;
    if(b>max) max = b;
    if(c>max) max = c;
    return max;
}
