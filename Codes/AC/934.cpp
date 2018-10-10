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
#define sotlaga(v) sort(v.begin(), v.end())
#define sll set<ll>
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll
#define N 100005

inline int sbt(int x){return __builtin_popcount(x);}

using namespace std;

int n, k;
int pre[N];
string s;

int f(char c) {
    
    int hi, lo, window, mid, available;
    memset(pre, 0, sizeof pre);
    int maxi = 0, ans;
    
    //if(s[0] == c) pre[0]++;
    for(int i = 1; i <= (int)s.length(); i++) {
        pre[i] = pre[i - 1];
        if(s[i - 1] == c) pre[i]++;
    }
    
    for(int i = 1; i <= (int)s.length(); i++) {
        lo = 1;
        hi = i;
        ans = 1;
        while(lo <= hi) {
            mid = (lo + hi) >> 1;
            available = pre[i] - pre[i - mid];
            window = mid;
            
            if((window - available) <= k) {
                lo = mid + 1;
                ans = mid;
            }
            else {
                hi = mid - 1;
            }
        }
        maxi = max(maxi, ans);
    }
    return maxi;
}

int main() {
    fast_io()
    
    cin >> n >> k;
    
    cin >> s;
    
    int res = f('a');
    res = max(res, f('b'));
    cout << res;
    
	
	return 0;
}
