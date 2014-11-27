#include<stdio.h>
int main(){
    int year = 0;
    int flag = 0;
    scanf("%d",&year);
    if(1895 < year <= 1923){
        if(year%4 == 0){
            printf("SUMMER");
            flag = 1;
        }
    }
    if(1924 <= year <= 1993){
        if(year%4 == 0){
            printf("SUMMER&WINTER");
            flag = 1;
        }
    }
    if( 1994 <= year ){
        if( year%4 == 2){
            printf("WINTER");
            flag = 1;
        }
        if( year%4 == 0){
            printf("SUMMER");
            flag = 1;
        }
        
    }
    if(flag == 0){
        printf("none");
    }
    return 0;
}
