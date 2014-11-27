 #include <stdio.h>
int main()
 {
     double f;
     scanf("%lf",&f);
     printf("0 F is %f C\n", 5.0/9.0*(-32));
     printf("50 F is %f C\n", 5.0/9.0*(50-32));
     printf("100 F is %f C\n", 5.0/9.0*(100-32));
     printf("%lf F is %lf C\n",f,5.0/9.0*(f-32));
     return 0;
}
