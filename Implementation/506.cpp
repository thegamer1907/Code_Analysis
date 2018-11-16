/*
8 5
10 9 8 7 7 7 5 5
outputCopy
6
inputCopy
4 2
0 0 0 0
outputCopy
0
*/
#include<stdio.h>

int n,k,dap;

int main(void){
    int i,x,y;
    scanf("%d %d",&n,&k);
    y=1000000000;
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(i==k) y=x;
        if(i<=k && x>0) dap++;
        else if(x>=y && x>0) dap++;
    }
    printf("%d\n",dap);
    return 0;
}

