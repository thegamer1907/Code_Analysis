#include <bits/stdc++.h>
int a[105];
int main(){
    int n ,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int l=1,r=n;
    int res=a[k];
    int ans=0;
    while(l<=r){
        int mid=(l+r)>>1;
        if(a[mid]>=res&&a[mid]>0){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    printf("%d\n",ans);
    return 0;
}