#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,m,j=1;
   scanf("%d",&n);
   int a[n+1],ans[1000001],sum=0;
   a[0]=0;
   for (int i=1;i<=n;i++) {
     cin>>a[i];
     sum += a[i];
     for (;j<=sum;j++) {
        ans[j]=i;
     }
   }
	
   scanf("%d",&m);
   int q[m+1];
   for (int i=1;i<=m;i++) {
     cin>>q[i];
   }
   for (int i=1;i<=m;i++) {
     cout<<ans[q[i]]<<"\n";
   }
}
