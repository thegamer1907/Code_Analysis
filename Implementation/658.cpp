#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    int score[n],mark=0;
    for(i=0;i<n;i++){
            scanf("%d",&score[i]);

    }
     for(i=0;i<k;i++){
            if(score[i]==0){
            mark=1;
            printf("%d",i);
                break;}
     }


    if(mark==0) {
            i=k;
        while(score[k-1]==score[i])
        {
            i++;
        }
        printf("%d",i);
    }






}
