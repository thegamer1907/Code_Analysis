#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> v;
ll check(ll *a, ll n, ll k){
    v.clear();
    for(int i = 0 ; i < n ; i ++){
        v.push_back(a[i] + (i + 1) * k);
    }
    sort(v.begin() , v.end());
    ll ret = 0;
    for(int i = 0 ; i < k ; i ++){
        ret += v[i];
    }
    return ret;
}


int main(){
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i];
    ll lo = 0;
    ll hi = n+1;
    ll mid;
    while(hi-1 > lo){
        mid = (lo + hi) / 2;
        ll temp;
        if((temp = check(a, n, mid)) <= s){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    cout << lo << " " << check(a, n, lo) << endl; 
}