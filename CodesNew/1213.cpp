#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,ans;
    cin>>n;
    ll a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> p;
    for(int i=0;i<n;i++){
        ll x = a[i]%n;
        if(x-i<=0) p.push_back(a[i]/n);
        else p.push_back(a[i]/n + 1);
    }
    ll min = 10000000000;
    for(int i=0;i<n;i++){
        if(p[i] < min){
            min = p[i];
            ans = i+1;
        }
    }
    cout<<ans;
    return 0;
}
