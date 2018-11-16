//#include <bits/stdc++.h>/*
#include <functional> //greater
#include <algorithm> //sort
#include <iostream>
#include <utility> //pair
#include <sstream>
#include <cstring> //memset
#include <complex>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype> //isaplha, tolower
#include <deque>
#include <queue>
#include <stack>
#include <array>
#include <cmath> //sqrt, sin
#include <map>
#include <set>
//*/

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
#define FIR(X,R,L) for(int X=R;X>=L;X--)
#define FI(I,X) for(auto I=(X).begin();I!=(X).end();I++)
#define print(X) {cerr<<"{ ";FI(I,X)cerr<<*I<<' ';cerr<<"}"<<endl;}
#define mset(V,X) memset(V,X,sizeof(V))
#define all(X) (X).begin(),(X).end()
#define upperb(V,X) (int)(upper_bound(all(V),(X))-V.begin())
#define lowerb(V,X) (int)(lower_bound(all(V),(X))-V.begin())

const double EPS = 1e-9;
const double PI = acos(-1);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ll mod = 1e9+7;
const int SZ = 1e5+20;

vi g[SZ];
int altura[SZ];

int dfs(int v){
	if(altura[v] != -1) return altura[v];
	altura[v] = 1;
	for(auto u: g[v]){
		altura[v] = max(altura[v], dfs(u)+1 );
	}
	return altura[v];
}

int main(){

	int n; cin>>n;
	FOR(i,1,n+1){
		int x; cin>>x;
		if(x > -1) g[x].pb(i);
	}
	mset(altura,-1);
	int res = 0;
	FOR(i,1,n+1){
		res = max(res, dfs(i) );
	}
	cout<<res<<endl;

	return 0;
}