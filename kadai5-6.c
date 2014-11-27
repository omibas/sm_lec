 #include <stdio.h>
void swap2(int *x, int *y);
void swap3(int *x, int *y,int *z);
int main(void){
    
    int a=19, b=39,c=49;
printf("Initially, a = %d and b = %d and c = %d\n", a, b, c);
swap3(&a, &b,&c);
printf("After swap2, a = %d and b = %d and c = %d\n", a, b, c);
return 0;
}
void swap3(int *x, int *y,int *z){
    swap2(x,y);
    swap2(y,z);

}
void swap2(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
