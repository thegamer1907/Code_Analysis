#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vpll vector<pll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define ln length()
#define M 1000000007
ll h,m,s,t1,t2;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>h>>m>>s>>t1>>t2;
    t1%=12;
    t2%=12;
    h%=12;

    if(t1>t2) swap(t1,t2);

    ll ct1=0,ct2=0;
    if(h>=t1 && h < t2) ct1++;
    else ct2++;

    if(m>= (t1%12)*5 && m<(t2%12)*5) ct1++;
    else ct2++;

    if(s>= (t1%12)*5 && s<(t2%12)*5) ct1++;
    else ct2++;

    if(ct1 == 0 || ct2==0) cout<<"YES\n";
    else cout<<"NO\n";
}
