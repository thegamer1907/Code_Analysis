#include<bits/stdc++.h>
using namespace std;
int mx[1000];
int main(){
     int a[1000],n,i,m,s,cnt=0,max=0;
     for(scanf("%d",&n),s=0,i=0;i<n;i++){
        scanf("%d",&m);
        mx[i]=m;
        if(m){
           if(!i) a[i]=m;
           else a[i]=a[i-1]+m;
        }
        else {
           if(!i) a[i]=0;
           else a[i]=a[i-1];
           }
     }
     if(n==1){
        printf("%d",!a[i-1]);
        return 0;
     }
   //  printf("%d\n",a[n-1]);
     for(s=a[n-1],i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(mx[i]){
              m=s+j-i+1-2*(a[j]-a[i]+1);
            } 
            else  m=s+j-i+1-2*(a[j]-a[i]);
            // printf("%d %d %d %d\n",a[j],a[i],j-i+1,m);
            if(m>max) max=m;
        }
     }
    printf("%d",max);
  
}
