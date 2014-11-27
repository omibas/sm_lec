#include<stdio.h>
#include<math.h>
double ave(int n,int a[]);
double std_dev(int n,double ave,int a[]);
int main(){
    int i;
    int a[100];
    int n;
    double r_ave;
    double r_sd;
    scanf("%d",&n);
    for(i =0;i<n;i++) scanf("%d",&(a[i]));
    r_ave  = ave(n,a);
    r_sd = std_dev(n,r_ave,a);
    printf("%lf %lf\n",r_ave,r_sd);
    return 0;
}

double ave(int n,int a[]){
    int sum = 0;
    int i;
    double ave;
    for(i =0;i<n;i++) sum +=a[i];
    ave = (double)sum/n;
    return ave;
}
double std_dev(int n,double ave,int a[]){
    double sum=0;
    int i;
    for(i =0;i < n;i++) sum += (ave - a[i])*(ave - a[i]);
    return sqrt(sum);
}
