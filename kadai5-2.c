#include<stdio.h>
int main(){
    int n;
    int r;
    scanf("%d",&n);
    r = dd(n);
    printf("%d\n",r);
    return 0;
}
int dd(int i){
    return i*i;

}
