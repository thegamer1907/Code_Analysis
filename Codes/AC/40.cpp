#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
ll l;
cin>>n>>l;
ll a[n];
for(int i=0;i<n;++i)
    cin>>a[i];
sort(a,a+n);
double m=a[0];
if(l-a[n-1]>m)
m=l-a[n-1];
for(int i=1;i<n;++i)
{
    if((a[i]-a[i-1])/2.0>m)
        m=(a[i]-a[i-1])/2.0;
}
cout<<fixed<<setprecision(10)<<m;
}