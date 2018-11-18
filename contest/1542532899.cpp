#include<bits/stdc++.h>
#define hell                         1000000007
#define ll                           long long
#define vll                          vector<ll>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define sz(a)                        (ll)a.size()
#define rep(i,a,b)                   for(int i=a;i<b;i++)
#define pl 							 pair<ll,ll>
#define F						 	 first
#define S							 second
#define lbnd                         lower_bound //index of val>=x
#define ubnd                         upper_bound //index of val>x
#define bs                           binary_search
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    ll x,num;
    set<ll> s;
    rep(i,0,n)
    {
        num=0;
        rep(j,0,k)
        {
            cin >> x;
            num+=(1<<j)*x;
        }
        s.insert(num);
    }
    set<ll>::iterator it,jt;
    for(it=s.begin();it!=s.end();it++)
        for(jt=s.begin();jt!=s.end();jt++)
            if(((*it)&(*jt))==0)
            return cout << "Yes",0;
    return cout << "No",0;
}
