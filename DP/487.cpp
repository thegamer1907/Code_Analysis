#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<ll> vl;
typedef vector<st> vs;
#define pb push_back
#define mp make_pair
#define rep(i, n) for(ll i = 0; i < n; i++)
#define fogg(i,a,b) for(ll i = (a); i <= (b); i++)
#define ford(i,a,b) for(ll i = (a); i >= (b); i--)
#define test ll t; cin >> t; while(t--)
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 1e6+7
#define hell 1000000007

int main()
{
	off;
	ll n,m,x,c=0;
	vl b,g;
	cin>>n;
	rep(i,n){
		cin>>x;
		b.pb(x);
	}
	st s="";
	rep(i,n){
		s=s+"1";
	}
	sort(b.begin(),b.end());
	cin>>m;
	rep(i,m){
		cin>>x;
		g.pb(x);
	}
	sort(g.begin(),g.end());
	for(auto x:g){
		rep(i,n){
			if(b[i]>x+1)
				break;
			else if(abs(b[i]-x)<=1&&s[i]=='1'){
				s[i]='0';
				c++;
				break;
			}
		}
	}
	cout<<c;
  return 0;
}
