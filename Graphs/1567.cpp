#include<bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <set>
#include <string>
#include <climits>
#include <stdio.h>
#include <cmath>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    ll a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin>>a[i];
    }
    ll i=1;
    while(i<=n)
    {
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            i+=a[i-1];
        }
    }
    cout<<"NO"<<endl;
    return 0;
}