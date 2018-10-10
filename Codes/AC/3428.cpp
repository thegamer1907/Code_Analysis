#include<set>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<bitset>
#include<vector>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#define Pi = acos(-1)
using namespace std;
typedef long long ll;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pql;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef vector<int> Vi;
typedef vector<ll> Vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef stack<int> si;
typedef stack<ll> sl;
typedef set<int> Si;
typedef set<ll> Sl;

ll n;
ll cal(ll k)
{
    ll x = n,cnt = 0;
    while(x > 0)
    {
        cnt += min(x,k);
        x -= k;
        x -= x/10;
    }
    return cnt >= (n+1)/2;
}
int main()
{
    cin>>n;
    ll l=1,r=(n+1)/2,m,ans=0;
    m = l+r>>1;
    while(l < r)
    {
        if(cal(m)) ans = r = m;
        else l = m+1;
        m = l+r>>1;
    }
    if(!ans) ans = 1;
    cout << ans << endl;
    return 0;
}















