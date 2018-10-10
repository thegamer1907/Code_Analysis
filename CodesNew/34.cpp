#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
bool f=0,g=0;
cin>>n>>l;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]==0)f=1;
if(a[i]==l)g=1;
}
sort(a.begin(),a.end());
int x=0;
for(int i=0;i<n-1;i++){
if(a[i+1]-a[i]>x)x=max(x,a[i+1]-a[i]);
}
double ans=x/2.0;
if(!f) ans=max(ans,(double)a[0]);
if(!g) ans=max(ans,(double)l-a[n-1]);
cout<<fixed<<setprecision(9)<<ans;
return 0;
}
