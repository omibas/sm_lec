#include<stdio.h>
double tsin(double x);
int main(){
    double i;
    for(i = -30;i < 30; i += 0.1) {
        printf("%lf %lf\n",i,tsin(i));
    }
    return 0;
}
double tsin(double x){
    return x-x*x*x/6.0f+x*x*x*x*x/120.0f;
}
