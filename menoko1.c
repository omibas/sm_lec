#include <stdio.h>
void main(void)
{
    int x;
    int odd = 1; /* set the first odd number */
    int count = 0; /* clear the counter count */
    printf("Enter a positive integer.\n");
    scanf("%d", &x);
    printf("The integralpart of the root %d", x);
    while (x - odd >= 0){
        x = x - odd;
        count = count + 1;
        odd = odd + 2;
        printf("ODD:%d COUNT:%d\n",odd,count);
    }
    printf(" is %d\n", count);
}
