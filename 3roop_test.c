#include<stdio.h>
int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    while(i<=n){
        
    printf("%d\n",i);
    i++;
    }
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    i = 1;
    do{

        printf("%d\n",i);
        i++;
    }while(i<=n);
        
   return 0;
}
