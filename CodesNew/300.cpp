#include<stdio.h>

int main(){

    int n,t=0,ans=0,i,sum=0,c=0,m,j;
    scanf("%d%d",&n,&m);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
     j=0;i=0;
    while(i<n)
   {
               if(sum+a[i]<=m)
                 {
                     sum+=a[i];
                     ans++;
                     i++;
                  }
               else
                 {
                     if(t>ans){
                        t=t;
                     }
                     else{
                        t=ans;
                     }
                     sum-=a[j];
                     ans--;
                     j++;
                 }
}
    if(t<ans){
        t=ans;
    }
    printf("%d\n",t);
    return 0;
}
