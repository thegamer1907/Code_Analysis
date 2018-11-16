#include <bits/stdc++.h>
using namespace std;
#define ll int
ll fans[40050];
ll ans1[202][202][202],ans2[202][202][202];
    ll pa1[202][202][202],pa2[202][202][202];
    ll rowdif1[202][202][202],rowdif2[202][202][202];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i;
    cin>>n;
    ll a[n],count = 0;
        vector <int> v;

    ll boys[1000] = {0};
    ll girls[1000] = {0};
    for (i =0 ;i<n;i++)
    {
        cin>>a[i];
        boys[a[i]]++;
    }
    cin>>m;
    sort(a,a+n);
    ll b[m+1];
    for (i = 0;i<m;i++)
    {cin>>b[i];
        girls[b[i]]++;}
    for (i = 0;i<n;i++)
    {
        ll k = a[i] - 1;
        ll p = a[i] + 1;
        ll o = a[i];
        ll gk,gp,go;
        gk = girls[k];
        gp = girls[p];
        go = girls[o];
        if (gk>0)
        {
            girls[k]--;
            count ++;
        }
        else if (go>0)
        {
            girls[o]--;
            count ++;
        }
        else if (gp>0)
        {
            girls[p]--;
            count ++;
        }
    
    }
    cout<<count;
    return 0;
}