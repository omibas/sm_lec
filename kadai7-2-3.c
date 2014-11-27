#include<stdio.h>
int main(){
    int a[1000][1000];
    int n;
    int i,j;
    int v;
    a[0][0] = 1;
    scanf("%d",&n);
    for(i = 1;i < n; i++){
        for(j = 0;j <= i; j++){
            if(j == 0) a[i][j] = a[i-1][j]; 
            if(j == i) a[i][j] = a[i-1][j-1];
            if( 0<j && j<i)a[i][j] = a[i-1][j] + a[i-1][j-1];
    }
    }
    for(i = 0;i < n; i++){
        //for(v = 0;v < (n-i)*5/2; v++)printf(" ");
        for(j = 0;j <= i; j++) printf("%5d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
