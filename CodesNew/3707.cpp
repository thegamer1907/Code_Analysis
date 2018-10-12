#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define sc scanf
#define pr printf
#define B break
#define R return
#define C continue
#define pb push_back
#define double long double
#define sz size()
#define endl '\n'
#define inf 1000000000000000000
#define P pair <ll,ll>
using namespace std;
ll n,m,a,b,c,w[200003],mod=1e9+7;
int main()
{
    cin >>n>>m;
    ll mm=m;
    for (int i=1;i<=n;i++){
        cin >>w[i];
        a=max(a,w[i]);
    }
    for (int i=1;i<=n;i++){
        b+=a-w[i];
    }
    m-=b;
    m=max(m,0LL);
    cout <<a+(m/n+bool(m%n))<<' '<<a+mm;
    return 0;
}
