#pragma comment(linker, "/stack:200000000")

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

#include <stdio.h>
#include <bits/stdc++.h>

#define uint unsigned int
#define int long long
#define ull unsigned long long
#define ld long double
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
#define sz(a) (int)a.size()
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
#define ret(a) return cout<<a,0;
using namespace std;
const int N=1e6;
string s[N];
int n,m;
set<pair<int ,int > > q;
int pos[N];


main(){
	ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	cin>>n;
	rep(i,0,n){
		cin>>s[i];
	}
	pos[n-1]=sz(s[n-1]);
	repb(i,n-1,0){
		int j=0;
		while(j<min(sz(s[i-1]),pos[i])&&s[i-1][j]==s[i][j])
			j++;
			
		if(j<sz(s[i-1])){
			if(j<pos[i]&&s[i][j]>s[i-1][j])
				pos[i-1]=sz(s[i-1]);
				else
				pos[i-1]=j;
		}
		else 
			pos[i-1]=j;
		
	}
	pos[n-1]=sz(s[n-1]);
	rep(i,0,n){
		rep(j,0,pos[i])
			cout<<s[i][j];
		cout<<'\n';
	}
	
}