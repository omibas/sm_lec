#include<stdio.h>
void div(int *a,int *b);
int main(){
    int c,d;
    scanf("%d %d",&c,&d);
    div(&c,&d);
    printf("%d %d\n",c,d);




    return 0;
}
void div(int *a,int *b){
    double r_1,r_2;
    r_1 = (*a)/(*b);
    r_2 = (*a)%(*b);
    *a = r_1;
    *b = r_2;

}
