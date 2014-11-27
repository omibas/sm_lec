#include <stdio.h>
int main(){
    int i;
    int a[100];
    int n;
    int p;
    int min;
    scanf("%d",&n);
    for(i =0;i<n;i++) scanf("%d",&(a[i]));
    min = a[0];
    for(i =0;i<n;i++){ 
        if (min>a[i]) min = a[i]; p = i;
    }
  
    printf("%d %d\n",p,min);



    return 0;
}
