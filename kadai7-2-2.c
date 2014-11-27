#include <stdio.h>
#include <math.h>
int main(){
    int i,d;
    int a[100];
    int n;
    double ans;
    scanf("%d",&n);
    for(i =0;i<n;i++) scanf("%d",&(a[i]));
    scanf("%d",&d);
    for(i =1;i<n;i++){
        ans += (double)a[i]*pow(d,i); 
    }

    printf("%lf",ans);
    printf("\n");



    return 0;
}
