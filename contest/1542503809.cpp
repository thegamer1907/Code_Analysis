//In The Name of Beauty

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef map<ll,ll> mllll;
#define IB std::ios::sync_with_stdio(0);
#define pb(x) push_back(x);
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define trvall(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define MAXN (ll)1e5 + 8
#define INF  (ll)1e12 + 8
ll const delta = 1000000007;

int main()
{
    IB;
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll n;
    cin >> n;
    string t;
    ll p = 0;
    ll a1  = 0,a2 = 0;
    for(ll i = 0;i < n;i++)
    {
        cin >> t;
        if(t == s)p = 1;
        if(t[1] == s[0])a1 = 1;
        if(t[0] == s[1])a2 = 1;
    }
    if(p)return cout << "YES",0;
    if(a1 && a2)return cout << "YES",0;
    cout << "NO";
    return 0;
}
//Written by M_H_H_7
