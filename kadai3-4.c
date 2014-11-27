#include<stdio.h>
int main(){
    int i;
    int n;
    int loop_c;
    int st_limit;
    int ed_limit;
    scanf("%d",&n);
    st_limit = 1;
    ed_limit = n;
    for(loop_c=1;loop_c<=n/2;loop_c++){
        for(i=st_limit;i<=ed_limit;i++){
            printf("%d",i);
        }
        printf("\n");
        st_limit++;
        ed_limit--;
    }





    return 0;
}
