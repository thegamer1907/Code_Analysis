
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
ll b = 0,s = 0,c= 0;
ll ns,nb,nc,ps,pb,pc,r;
bool check(ll mid){
	ll rb = b*mid;
	ll rs = s*mid;
	ll rc  = c*mid;
	ll cost = 0;
	cost+=(max(rb-nb,(ll)0)*pb);
	cost+=(max(rs-ns,(ll)0)*ps);
	cost+=(max(rc-nc,(ll)0)*pc);
	if(cost <= r)
		return true;
	return false;
}
int main () {
	std::ios::sync_with_stdio(false);
	string si;
	cin >> si;
	for(ll i = 0 ; i < si.size() ; i++){
		if(si[i] == 'B')
			b++;
		if(si[i] == 'S')
			s++;
		if(si[i] == 'C')
			c++;
	}
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc ;
	cin >> r;
	ll l = 0;
	ll ri = 10000000000000;
	
	while(l < ri-1){
		// cout << "hi\n";
		ll mid = (l+ri)/2;
		if(check(mid))
			l = mid;
		else
			ri = mid-1;
	}
	if(check(l+1))
	cout << l+1;
	else 
		cout << l;
    return 0; 
}

