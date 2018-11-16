#include <iostream>
#include <bits/stdc++.h>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
#define ll long long



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    for(ll i=1;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    ll cell=1;
    while(cell<t)
    {
        cell+=arr[cell];
    }
    if(cell==t)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
