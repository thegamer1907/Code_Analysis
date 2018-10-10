
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
# define M_PI           3.14159265358979323846  /* pi */
// #define for(i,a,b) for(ll i=a;i<b;i++)
// #define rep(i,n) f(i,0,n)
using namespace std;
ll N = 10000000;
ll lp[10000001];
vector<ll> pr;
ll pre[10000001];
ll presum[10000001];
int main () {
	std::ios::sync_with_stdio(false);
	for (ll i=2; i<=N+1; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back (i);
	    }
	    for (ll j=0; j<(ll)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
	        lp[i * pr[j]] = pr[j];
	}
	ll n;
	cin >> n;
	for(ll i = 0 ; i < n ; i++){
		ll a;
		cin >> a;
		unordered_set<ll> s;
		while(lp[a] != a){
			if(s.find(lp[a]) == s.end()){
				pre[lp[a]]++;
				s.insert(lp[a]);
			}
			a/=lp[a];
		}
		if(s.find(lp[a]) == s.end()){
			pre[lp[a]]++;
			s.insert(lp[a]);
		}
	}
	for(ll i = 0 ; i < 10000001 ; i++){
		if(i == 0)
			presum[i] = pre[i];
		else
			presum[i] = presum[i-1] + pre[i];
	}
	ll m;
	cin >> m;
	for(ll i = 0 ; i < m ; i++){
		ll l,r;
		cin >> l >> r;
		if(l > 10000001)
			l = 10000001;
		if(r > 10000000)
			r = 10000000;
		cout << presum[r] - presum[l-1] << endl;
	}
	
    return 0; 
}

