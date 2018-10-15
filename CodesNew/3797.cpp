#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[100001];
bool check(ll m){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum += (m-a[i]);
    }
    if(sum>=m) return true;
    else return false;
}
ll bs(ll a[],ll l,ll r){
    while(l<=r){
        ll m = l+(r-l)/2;
        if(check(m)) r=m-1;
        else l=m+1;
    }
    return l;
}
int main()
{
    cin >> n;
    ll sum=0,maxm=INT_MIN;
    for(int i=0;i<n;i++){
        cin  >> a[i];
        sum += a[i];
        maxm = max(maxm,a[i]);
    }
    cout << bs(a,maxm,sum) << endl;
}