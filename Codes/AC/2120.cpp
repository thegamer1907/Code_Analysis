#include<bits/stdc++.h>
using namespace std;
const int nmax=2*1e5+42;
int n,k;
int a[nmax];
map<long long,long long> before,after;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie();
cin>>n>>k;
for(int i=1;i<=n;i++)cin>>a[i];
for(int i=1;i<=n;i++)after[a[i]]++;
long long ans=0;
for(int i=1;i<=n;i++)
{
after[a[i]]--;
if(a[i]%k==0)
{
ans=ans+1LL*before[a[i]/k]*after[1LL*a[i]*k];
}
before[a[i]]++;
}
cout<<ans<<endl;
return 0;
}
