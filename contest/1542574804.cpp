#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pll pair<ll,ll>
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define sep(i,a,b) for(ll i=a;i>=b;i--)
#define mll map<ll,ll>
#define vl vector<ll>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	ll n;
	cin>>s>>n;
	string a[n];
	rep(i,0,n)
    cin>>a[i];
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if((a[i]+a[j]).find(s)!=-1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
