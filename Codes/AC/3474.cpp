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
#define Print(X) FI(I,X)cerr<<(I==(X).begin()?"{ ":", ")<<*I;cerr<<" }\n";
#define mset(V,X) memset(V,X,sizeof(V))
#define all(X) (X).begin(),(X).end()
#define upperb(V,X) (int)(upper_bound(all(V),(X))-V.begin())
#define lowerb(V,X) (int)(lower_bound(all(V),(X))-V.begin())

const double PI = acos(-1);
const int INF = 0x3f3f3f3f; //3f3f3f3f;
const int SZ = 1e5+10;
const ll mod = 1e9+7;

ll func(ll n, ll k){
	ll ret = 0;
	while(n){
		ll aux = min(n,k);
		n -= aux;
		ret += aux;
		aux = n/10;
		n -= aux;
	}
	return ret;
}

ll x;
bool f(ll k){
    return func(x,k)*2 >= x;
}

ll bin(ll l, ll r){
    while(l<=r){
        ll m = (l+r)/2;
        f(m) ? r = m-1 : l = m+1;
    }
    return l; /* primeiro true 
    return r; // ultimo false */
}

int main(){

	cin>>x;
	ll res = bin(1,x);
	cout<<res<<endl;
	
	return 0;
}