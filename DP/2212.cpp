#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(it,a)   for(auto it=(a).begin();it!=(a).end();it++) 
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define inf         1000000007
int main()
{
    long long int n,m;
    cin >> n >> m;
    set <long long int> r;
    long long int a[n];
    long long int ans[n];
    rep(i,0,n)
    {
        cin >> a[i];
    }
    long long int count=0;
    for (long long int i=n-1;i>=0;i--)
    {
        if (r.find(a[i])==r.end())
        {
            count=count+1;
            r.insert(a[i]);
        }
        ans[i]=count;
    }
    rep(i,0,m)
    {
        long long int k;
        cin >> k;
        cout << ans[k-1] << endl;
    }
}