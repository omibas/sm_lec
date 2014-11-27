#include<stdio.h>
double x(double t);
double y(double t); 
int main(){
    double n;
    double r_x,r_y;
    scanf("%lf",&n);
    r_x = x(n);
    r_y = y(n);
    printf("%lf %lf\n",r_x,r_y);
    
    
    return 0;
}
double x(double t){
    double ans_x;
    double temp1,temp2;
    temp1 = 3.0f*(1.0f-t)*(1.0f-t*t);
    temp2 = (1.0f+3.0f*t*t);
    ans_x = temp1/temp2;
    return ans_x;
}
double y(double t){
    double ans_y;
    double temp1,temp2;
    temp1 = 3.0f*(1.0+t)*(1.0f-t*t);
    temp2 = (1.0f+3.0f*t*t);
    ans_y = temp1/temp2;
    return ans_y;


}
