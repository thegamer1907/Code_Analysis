#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
lli cnt[200000],flag[200000];
int main(){
   lli i,a[200000],k,m,n;
   for(scanf("%lld%lld",&n,&m),i=0;i<n;i++)
       scanf("%lld",&a[i]);
   for(lli i=n-1;i>=0;i--){
       cnt[a[i]]++;
       if(cnt[a[i]]==1) flag[i]=flag[i+1]+1;
       else flag[i]=flag[i+1];
   }
   for(i=0;i<m;i++){
       scanf("%lld",&k);
       printf("%lld\n",flag[k-1]);
   }
}