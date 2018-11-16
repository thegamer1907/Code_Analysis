#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define xmax(x,y) ((x) = max((x),(y)))
#define xmin(x,y) ((x) = min((x),(y)))
#define all(x) (x).begin(),(x).end()
#define mem(x) memset(x , 0 , sizeof(x))
#define _ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define FP(a , b , c)  for(ll (a) = (b) ; (a) < (c) ; (a++));
#define FM(a , b , c)  for(ll (a) = (b) ; (a) >= (c) ; (a--));

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll Maxn3 = 1e3 + 10;
const ll Maxn4 = 1e4 + 10;
const ll Maxn5 = 1e5 + 10;
const ll Maxn6 = 1e6 + 10;
const ll Maxn7 = 1e7 + 10;
const ll Maxn8 = 1e8 + 10;
const ll Maxn9 = 1e9 + 10;
const ll Maxn18 = 1e18 + 10;
const ll Mod1 = 1e7 + 7;
const ll Mod2 = 1e9 + 7;
const ll LLMax = LLONG_MAX;
const ll LLMin  = LLONG_MIN;
const ll INTMax = INT_MAX;
const ll INTMin  = INT_MIN;
//vector <ll> g[Maxn6];
ll a[Maxn6] , g[Maxn6];
bool mark[Maxn5];
ll res = 0 , d , n;
/*vector <ll> cc;
ll dfs(ll x , vector <ll> c)
{
    cout << x << ": ";
    mark[x] = 1;
    if(g[x].size() == 1)
    {
        ll child = g[x][0];
        if(cc[child] != cc[x])res++;
        cout << "." << child << ' ' << cc[x] << ' ' << cc[child] << endl;
        return res;
    }
    bool mc = 0;
    for(ll i = 0 ; i < g[x].size() ; i++)
    {
        ll child = g[x][i]; cout << child << endl;
        if(!mark[child]) dfs(child , cc);
        if(cc[x] != cc[child] and !mc) res++ , mc = 1;
    }
    return res;
}*/
int main()
{_
    cin>>n;
    for (ll i = 2 ; i <= n ; i++) cin>>d , g[i] = d;
    for (ll i = 1 ; i <= n ; i++) cin>>a[i] ,a[i]!=a[g[i]]?res++:0;
    return cout<<res , 0;
}
///SAliB
