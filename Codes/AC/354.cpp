#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,m;
   scanf("%d",&n);
   int a[n+1];
   vector<int> sum(0);
   vector<int>::iterator it;
   sum.push_back(0);

   for (int i=1;i<=n;i++) {
     cin>>a[i];
     sum.push_back(sum[i-1]+a[i]);
   }

   scanf("%d",&m);
   int q[m+1];
   for (int i=1;i<=m;i++) {
     cin>>q[i];
   }

   for (int i=1;i<=m;i++) {
     it=lower_bound(sum.begin(),sum.end(),q[i]);
     cout<<(it-sum.begin())<<"\n";
   }
}
