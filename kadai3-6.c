#include<stdio.h>
#include<math.h>
int main(){
    int n=0,m=0,l=0;
    double ave,sd_dv,i;
    scanf("%d %d %d",&n,&m,&l);
    ave=(n+m+l)/3;
    printf("AVE:%.1lf",ave);
    i = ( (ave-n)*(ave-n) + (ave-m)*(ave-m) + (ave-l)*(ave-l) )/3;
    sd_dv = sqrt(i);
    printf("SD_DV:%.1lf",sd_dv);



    return 0;
}
