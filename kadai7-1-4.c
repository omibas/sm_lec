#include <stdio.h>
int main(){
    int i,j;
    int a[100];
    int n;
    int temp;
    scanf("%d",&n);
    for(i =0;i<n;i++) scanf("%d",&(a[i]));
    for(j = 0 ;j<n;j++){
        for(i =1;i<n;i++){ 
            if(a[i-1] < a[i]){
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
    }
    for(i =0;i<n;i++) printf("%d ",a[i]);
    printf("\n");



    return 0;
}
