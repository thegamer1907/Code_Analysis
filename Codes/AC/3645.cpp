#include <bits/stdc++.h>
#define F(i,n) for (int i=1; i<=n; i++)
#define FF(i,n) for (int i=0; i<n; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define pi pair < int , int >
using namespace std;
typedef long long ll;
const int N = 300010;
const int big = 2e9;
const int md = 1e9 + 7;
string s;
ll k1,k2,k3,p1,p2,p3,r,n1,n2,n3,l,d,rr;
bool ok(ll x){
    ll sum=0,q1,q2,q3;
    q1=k1*x-n1; q1=max(0ll,q1);
    sum+=q1*p1;

    q2=k2*x-n2; q2=max(0ll,q2);
    sum+=q2*p2;

    q3=k3*x-n3; q3=max(0ll,q3);
    sum+=q3*p3;
    return sum<=rr;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    //freopen("input.txt","r",stdin);
    cin>>s; k1=0; k2=0; k3=0;
    for (int i=0; i<s.length(); i++)if (s[i]=='B') k1++; else if (s[i]=='S') k2++; else k3++;
    cin>>n1>>n2>>n3;
    cin>>p1>>p2>>p3;
    cin>>rr;
    l=0; r=1e15-1;
    while (l<r){
        d=(l+r+1ll)>>1ll;
        if (ok(d)) l=d; else r=d-1ll;
    }
    cout<<l;
    return 0;
}





