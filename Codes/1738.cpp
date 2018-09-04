// start of CP 2.0
#include <bits/stdc++.h>

//____By:sirjan13____

#define ll long long int
#define mod 1000000007
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
#define fi first
#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define pb push_back
#define pi pair<int,int>
#define si set<int>
#define all(v) v.begin(),v.end()
#define sotlaga() sort(v.begin(), v.end())
#define sll set<ll>
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll

inline int sbt(int x){return __builtin_popcount(x);}

using namespace std;

ll k, n, m;
ll mid, lo, hi, res;

ll f(ll x) {
    ll less = 0;
    for(int i = 1; i <= n; i++){
        less = less + min(m, x/i);
    }
    return less;
}

int main() {
    fast_io()
    cin >> n >> m >> k;
    
    lo = 1;
    hi = n * m;
    ll kth;
    while(lo <= hi) {
        mid = (lo + hi) >> 1;
        if(f(mid - 1) < k) {
            kth = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    cout << kth << endl; 
	return 0;
}




