#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("overcode.in","r",stdin);
ll n , t , i ;
cin>>n>>t;
vector<ll>v(n),z(n-1,0);
for(i=0;i<n-1;i++)
{
    cin>>v[i];
}
for(i=0;i<n-1;i++)
{
    z[i]=i+v[i];
    i+=v[i]-1;
}
if(z[t-1]){cout<<"YES";}
else{cout<<"NO";}
}

