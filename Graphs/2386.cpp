#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector< int >
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define endl                           '\n'

using namespace std;

int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll i,j,n,t=1,l=0,k=0,cnt=0,mini=999999,maxi=-999999999,ans=0;
ll m;
cin>>n;
ll a[n+2];
rep(i,1,n+1)
{
    cin>>a[i];
}

for(i=1;i<=n;i++)
{ cnt=1;
  j=i;
    while(a[j]!=-1)
    {
        cnt++;
        j=a[j];
    }
ans=max(cnt,ans);
}
cout<<ans;
return 0;

}

