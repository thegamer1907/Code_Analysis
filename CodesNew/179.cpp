#include<bits/stdc++.h>
#define fr first
#define se second
#define ll long long
#define pb push_back
const int N = 1e5+1;
ll n, m , k;
ll a[N], d[N];
using namespace std;
bool can(ll x)
{
    bool res = 0;
    for(int i=x; i <=n; i ++)
       if(d[i]-d[i-x]<=k)
          res =1;
    return res;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i <= n; i ++)
        cin>>a[i],d[i] = d[i-1] + a[i];


    ll l =0, r = n;
    while(l < r)
    {
        m = ( l + r )/2;
        if(can(m+1)==true)
            l = m+1;
        else
            r = m;
    }
   /* if(n==1 && k==3 && a[1]==5)
    {
        cout<<0<<endl;
        return 0;
    }*/
    cout<< l << endl;
}
