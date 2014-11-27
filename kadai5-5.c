#include <stdio.h>
#include <math.h>
int quad3(int a, int b, int c,float *r1,float *r2);

int main(void){
    
    int a,b,c;
    float r1,r2;
printf("Enter the three coefficients");
printf("of a quadratic equation.\n");
scanf("%d %d %d", &a, &b, &c);
if (a != 0) quad3(a, b, c,&r1,&r2);
else printf("The value of an a must not be zero.\n");
printf("%lf %lf",r1,r2);
return 0;
}

int quad3(int a, int b, int c,float *r1,float *r2)
{
    int det;
    float d;
    det = b*b - 4*a*c;
    if( det == 0){
        printf("This equation has one realroot: %10.2f.\n",
               -b/(2.0*a));
        *r1  = (-b+det)/(2.0*a);
        *r2  = (-b-det)/(2.0*a);
    return 1;
    }else if(det > 0){
        d = sqrt((double)det);
        printf("This equation has two realroots:");
        printf("%10.2f and %10.2f.\n",
               (-b+d)/(2.0*a), (-b-d)/(2.0*a));
        *r1  = (-b+det)/(2.0*a);
        *r2  = (-b-det)/(2.0*a);
        return 2;
    } else if(det < 0){
        d = sqrt(fabs((double)det));
        printf("This equation has two complex roots.\n");
        printf("The realpart is %10.2f ",-b/(2.0*a));
        printf("and the imaginary part is %10.2f.\n ",d/(2.0*a));
        *r1  = -b/(2.0*a);
        *r2  = sqrt(-det)/(2.0*a);
        return 0;
    }
}
