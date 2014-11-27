#include<stdio.h>
int main(){
    int l,m,n;
    int max = 0;
    int min = 0;
    scanf("%d %d %d",&l,&m,&n);
    max = l;
    if(m>max){
        max = m;
    }
    if(n>max){
        max = n;
    }
    min = l;
    if(m<min){
        min = m;
    }
    if(n<min){
        min = n;
    }
    printf("%d %d\n",max,min);
    return 0;
}
