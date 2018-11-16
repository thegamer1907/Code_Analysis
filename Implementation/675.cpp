#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,i,j,tmp;
    scanf("%d%d",&n,&k);
    int ar[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
     tmp=ar[k];
     for(j=1;j<=n;j++){
        if(ar[j]>=tmp && ar[j]>0){
            count++;
        }
        }
        printf("%d\n",count);
    return 0;
}
