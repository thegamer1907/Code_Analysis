#include <bits/stdc++.h>/*
#include <functional> //greater
#include <algorithm> //sort
#include <iostream>
#include <utility> //pair
#include <sstream>
#include <cstring> //memset
#include <complex>
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

#define ll long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
using namespace std;

template<class T> ostream &operator<<(ostream &os, const pair<T,T> &p){
	return os<<"("<<p.fi<<","<<p.se<<")";}
#define FOR(X,L,R) for(int X=L;X!=R;L<R?X++:X--)
#define FI(I,X) for(auto I=(X).begin();I!=(X).end();I++)
#define Print(X) {cerr<<"{ ";FI(I,X)cerr<<(I==(X).begin()?"":", ")<<*I;cerr<<" }\n";}
#define mset(V,X) memset(V,X,sizeof(V))
#define all(X) (X).begin(),(X).end()
#define upperb(V,X) (int)(upper_bound(all(V),(X))-V.begin())
#define lowerb(V,X) (int)(lower_bound(all(V),(X))-V.begin())

const double PI = acos(-1);
const int INF = 0x3f3f3f3f; //3f3f3f3f;
const int SZ = 1e5+10;
const ll mod = 1e9+7;

int main(){

	int n; scanf(" %d", &n);
	vi v(n); FOR(i,0,n) scanf(" %d", &v[i]);
	int res = INF; int id = 0;
	FOR(i,0,n){
		if(res > i+n*((v[i]-i+n-1)/n) ){
			id = i+1; res = i+n*((v[i]-i+n-1)/n);
		}
	}
	cout<<id<<endl;

	return 0;
}