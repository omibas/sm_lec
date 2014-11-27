#include<stdio.h>
#include<math.h>
double f(double x);
int main(){
    double i;
    for(i=-5;i<=5;i+=0.1){


        printf("%lf %lf\n",i,f(i));


    }



    return 0;
}
double f(double x){
    double r;
    if(fabs(x) <= 2) r = exp(x*x/2.0);
    if(fabs(x)>2  && fabs(x)<=4 ) r = pow((1.0-fabs(x)),4.0)/(16.0*M_E*M_E);
    if( 4 < fabs(x) ) r = 0;
    return r;

}
