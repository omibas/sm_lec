#include<stdio.h>
int main(){
    int y;
    int flag = 0;
    scanf("%d",&y);
    switch(y%4){
    case 2:
        if(1993<y){
            printf("WINTER");
            flag = 1;
        }
        break;
    case 4:
        if(1895<y<=1923){
            printf("SUMMER");
            flag = 1;
        }
        if(1923<y<=1993){
            printf("SUMMER&WINTER");
            flag = 1;
        }
        if(1993<y){
            printf("SUMMER");
            flag = 1;  
        }
        break;
    default:
        break;
    }
    if(flag == 0)printf("NONE");





}
