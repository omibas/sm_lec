#include<stdio.h>
int main(){
    int n;
    int i,j;
    int flag = 0;
    scanf("%d",&n);
    for( i = n ; i >= 1 ; i-- ){
        if(i%2 == 0) flag = 0;
        if(i%2 == 1) flag = 1;
        for( j = 1 ; j <= i ; j++ ){
            if(flag == 0 ) printf("*");
            if(flag == 1 ) printf("%%");
            flag ^=1;
        }
        printf("\n");
    }
    return 0;
}
