#include<stdio.h>
void folium(double t,double*x,double*y); 
int main(){
    double n,a_x,a_y;
  
    //scanf("%lf",&n);
    for( n = -2 ; n <= 2; n += 0.001 ){
        folium(n,&a_x,&a_y);
        printf("%lf %lf\n",a_x,a_y);
    }
    
    return 0;
}
void folium(double t,double*x,double*y){
    double ans_x;
    double temp0,temp1,temp2;
    temp0 = (1.0f-t);
    temp1 = (1.0f+t);
    temp2 = 3.0f*(1.0f-t*t)/(1.0f+3.0f*t*t);
    *x = temp0*temp2;
    *y = temp1*temp2;
}
