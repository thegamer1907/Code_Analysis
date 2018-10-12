#include<bits/stdc++.h>
#define ll          long long
#define ld          long double
#define pll         vector< pair<ll ,ll> >
#define vll         vector<ll>
#define vi          vector<int>
#define hell        1000000007
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define pb          push_back
#define F           first
#define S           second
#define mp          make_pair
#define all(v)      v.begin(), v.end()
#define lb          lower_bound  //value not less than(>=)
#define ub          upper_bound  //value greater than(>)
#define bs          binary_search
#define pcont(v)    for(auto it:v) cout<<it<<" ";cout<<endl
#define ret(x)      return cout << x,0;
int const MAX = 1e5 + 5;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    ll n,m;
    cin >> n >> m;
    string s[n],t[m];
    set<string> st;
    rep(i,0,n)
    {
        cin >> s[i];
        st.insert(s[i]);
    }
    rep(j,0,m)
    {
        cin >> t[j];
        st.insert(t[j]);
    }
    ll com = st.size();
    ll x = n-com;
    ll y = m-com;
    if(x>y)ret("YES");
    if(x==y && com%2==1) ret("YES");
    ret("NO");

}
