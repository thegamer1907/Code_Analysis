#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define INF 200000000000000LL
#define M 1000000007
#define ff first
#define ss second
#define mod(x) (x = (x)%M)
#define SIZE 200005
#define fast cin.tie(0);cout.tie(0);cin.sync_with_stdio(false)
#define endl '\n'
#define mset(v,x) memset(v,x,sizeof(v))
typedef long long ll;
using namespace std;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
ll cbread , csausage , ccheese , rbread =0, rsausage =0, rcheese=0,money;
ll cost_b,cost_s, cost_c;
ll check(ll burgers)
{
    ll b = burgers*rbread , s = burgers*rsausage , c = burgers*rcheese;
    b-=cbread; b = max(b,0LL);
    s -=csausage; s = max(s , 0LL);
    c -= ccheese; c = max(c ,0LL);
    ll cost = b*cost_b + s*cost_s + c*cost_c;
    if (cost > money)   return 0;
    return burgers;
}
int main()
{
    //freopen("input.txt", "r" , stdin);
    string str;
    cin>>str>>cbread>>csausage>>ccheese>>cost_b>>cost_s>>cost_c>>money;
    for(auto it : str)
    {
        if (it == 'B')rbread++;
        else if (it == 'S') rsausage++;
        else rcheese++;
    }
    ll lo = 0 , hi = INF, mid;
    while(lo+1<hi)
    {
        mid = (lo + hi)/2;
        if (check(mid))
            lo = mid;
        else hi = mid;
    }
    cout<<lo;
    return 0;
}
