#include <bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define startech ios_base::sync_with_stdio(0);cin.tie(0);
#define INF 100000000000007
#define MAX 200004
#define mod 1000000007
#define pii pair<ll,ll>

int main()
{
    ll n,l,i;
    cin>>n>>l;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double mx=double(a[0]);
    for(i=1;i<n;i++)
    {
        mx=max(mx,double(a[i]-a[i-1])/2);
    }
    mx=max(double(l-a[n-1]),mx);

    cout<<fixed<<setprecision(9)<<mx<<"\n";
}
