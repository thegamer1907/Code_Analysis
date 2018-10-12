//#include <bits/stdc++.h>/*
#include <functional> //greater
#include <algorithm> //sort
#include <iostream>
#include <iterator>
#include <utility> //pair
#include <sstream>
#include <cstring> //memset
#include <complex>
#include <cassert>
#include <random>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype> //isaplha, tolower
#include <deque>
#include <queue>
#include <stack>
#include <array>
#include <cmath> //sqrt, sin
#include <ctime>
#include <map>
#include <set>
//*/

#define int long long
#define uns unsigned
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
using namespace std;

template<class T> ostream &operator<<(ostream &os, const pair<T,T> &p){
	return os<<"("<<p.fi<<","<<p.se<<")";}
template<class T> ostream &operator<<(ostream &os, const pair<const T,T> &p){
	return os<<"("<<p.fi<<","<<p.se<<")";}
template<class T> ostream &operator<<(ostream &os, const array<T,3> &p){
	return os<<"("<<p[0]<<","<<p[1]<<","<<p[2]<<")";}
template<class T> ostream &operator<<(ostream &os, const vector<T> &p){
	for(auto x: p) os<<x<<' '; return os;}
#define FOR(X,L,R) for(int X=L;X<R;X++)
#define FI(I,X) for(auto I=(X).begin();I!=(X).end();I++)
#define print(X) {cerr<<"{ ";FI(I,X)cerr<<*I<<' ';cerr<<"}"<<endl;}
#define mset(V,X) memset(V,X,sizeof(V))
#define all(X) (X).begin(),(X).end()
#define upperb(V,X) (int)(upper_bound(all(V),(X))-V.begin())
#define lowerb(V,X) (int)(lower_bound(all(V),(X))-V.begin())

const double EPS = 1e-9, PI = acos(-1);
const ll LINF = 0x3f3f3f3f3f3f3f3f, mod = 1e9+7;
const int INF = 0x3f3f3f3f, SZ = 2e5+20;

int32_t main(){
	ios::sync_with_stdio(false);cin.tie(0);

	int n,m; cin>>n>>m;
	map<int,int> a;
	FOR(i,0,n){
		int x; cin>>x; a[x]++;
	}
	int res1,res2;
	res2 = (--a.end())->fi + m;
	while(m>0){
		int x = a.begin()->fi;
		int c = a.begin()->se;
		a[x+1] += c;
		if(m >= c)
		a.erase(x);
		m -= c;
	}
	res1 = (--a.end())->fi;
	
	cout<<res1<<' '<<res2<<endl;

	return 0;
}