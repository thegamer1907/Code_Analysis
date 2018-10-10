// start of CP 2.0
#include <bits/stdc++.h>

//____By:sirjan13____

#define int long long
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
int n, k, hi, lo, ans;

int32_t main() {
    fast_io()
    
    cin >> n >> k;
    lo = long_one;
    hi = (long_one << n) - 1;
    ans = n;
    
    while(lo <= hi) {
        int mid = (lo + hi) >> 1;
        if(mid == k) {
            break;
        }
        if(mid < k) {
            lo = mid + 1;
            ans--;
        }
        else {
            hi = mid - 1;
            ans--;
        }
    }
    
    cout << ans;
	
	return 0;
}