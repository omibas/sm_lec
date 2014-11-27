#include<stdio.h>
int main(){
    int i;
    int a[100];
    int n;
    scanf("%d",&n);
    for(i =0;i<n;i++) scanf("%d",&(a[i]));
    for(i =1;i<n;i++) a[i] += a[i-1];
    for(i =0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
