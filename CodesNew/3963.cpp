#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
typedef long long ll;
ll search(vector<ll> &b,ll i)
{
    ll k=0,j,n=b.size()-1;
    for(j=(n+1)/2;j>=1;j/=2)
        while(k+j<=n && b[k+j]<=i)k+=j;
    return k;
}
int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll i,j=0,l=0,m=0,n,p,q;
    cin >> n >> q;
    vector<ll> a(n),b(n+1,0);
    vector<ll> k(q);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        b[i+1]=b[i]+a[i];
    }   
    for(i=0;i<q;i++)
        cin >> k[i];
    for(i=0;i<q;i++)
    {
        p=k[i]+b[j]+m;
        j=search(b,p);
        m=p-b[j];
        if(j>=n)
        {
            j=0;
            m=0;
        }
        cout << n-j << endl;
    }
    return 0;
}