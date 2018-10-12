#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int f(ll lo,ll hi,ll k,int n)
{
    ll m=(lo+hi)/2;
    if(k<m)
    return f(lo,m-1,k,n-1);
    else if(k>m)
    return f(m+1,hi,k,n-1);
    else
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; ll k;
    cin >> n >> k;
    ll h=(ll)pow(2,n) - 1;
    cout << f(1,h,k,n);
}  