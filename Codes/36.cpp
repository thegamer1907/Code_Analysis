#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
 ll i,n,l;
 cin>>n>>l;
 ll a[n+5];
 for(i=0;i<n;i++)
 cin>>a[i];
sort(a,a+n);
double d=a[0];
for(i=1;i<n;i++)
{
 double x=(a[i]-a[i-1])/2.0;
 d=max(d,x);
}
d=max(d,(double)l-a[n-1]);
cout<<fixed<<setprecision(10)<<d;
}
