#include<stdio.h>
int main(){
    int a[100];
    int b[100];
    int i,j;
    int n;
    int in_p;
    int out_p[100][100];
    scanf("%d",&n);
    for(i = 0;i<n;i++) scanf("%d",&(a[i]));
    for(i = 0;i<n;i++) scanf("%d",&(b[i]));
    for(i = 0;i<n;i++) in_p += a[i]*b[i];
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++) out_p[i][j] = a[i]*b[j];
       
    }
    printf("%d\n",in_p);
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++) printf("%3d ",out_p[i][j]);
        printf("\n");
    }

    return 0;
}
