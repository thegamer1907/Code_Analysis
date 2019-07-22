#include <bits/stdc++.h>
typedef long long ll;
#define gcd(x,y) __builtin_gcd(x,y)
#define numberof1(x) __builtin_popcount(x)
#define povsemelementam(i,mnozh) for(auto i: mnozh)
#define podotrezok(i,j) substr(i-1,j) // like prefix sum, (i,j)=s[j]-s[i-1]
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define eb emplace_back 
#define MP make_pair 
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector <int>
#define vll vector <ll>
#define mipletsplay ios_base::sync_with_stdio(0); cin.tie(0); 
#define REP(i, a, b) for (int i = a; i < b; i++)


using namespace std;
const ll INFLL = 1e18;
const int MAXN = 3e5;
const int INF = 1e9;

int main() {
mipletsplay;
ll n,m,k;
cin >>n>>m>>k;
deque <ll> d;
for (ll i=0;i<m;i++)
{
 ll x;
 cin >>x;
 d.pb(x);
}
ll answer=0;
while (d.size()!=0)
{
answer++;
ll t=d.front();
ll chet=0;
ll f;
if (t%k==0)
f=t;
else
f=(t/k +1)*k;
while (d.front()<=f)
{
 d.popf();
 chet++;
}
if (d.size()!=0)
{
 for (ll i=0;i<d.size();i++)
 d[i]-=chet;
    
    
    
} }
cout << answer;    
    
    
    
    
}