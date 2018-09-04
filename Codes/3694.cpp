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
string s1;
ll r, nb, b, s, res, c, ns, nc, pB, ps, pc, lo, mid, hi, x;

bool f(ll x) {
    ll ansb = max(long_zero, (x * b - nb)) * pB;
    ll anss = max(long_zero, (x * s - ns)) * ps;
    ll ansc = max(long_zero, (x * c - nc)) * pc;
    
    return ((ansb + anss + ansc) <= r);
}

int main() {
    fast_io()
    cin >> s1;
    cin >> nb >> ns >> nc;
    cin >> pB >> ps >> pc;
    cin >> r;
    
    for(auto ch: s1){
        if(ch == 'B') b++;
        else if(ch == 'S') s++;
        else c++;
    }
    lo = 0;
    hi = 1e15;
    while(lo <= hi) {
        
        mid = (lo + hi) >> 1;
        if(f(mid)) {
            lo = mid + 1;
            res = mid;
        }
        else {
            hi = mid - 1;
        }
    }
    cout << res;
    
	return 0;
}




