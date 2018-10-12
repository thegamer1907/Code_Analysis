#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; ll x=0;
    ll t;
    ll ma=0;
    cin >> n >> t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        while(s>t)
        {
            s=s-a[x];
            x++;
        }
        ma=max(ma,i+1-x);
    }
    cout << ma;
}