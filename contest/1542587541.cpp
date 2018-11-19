#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdio>

#define fri(i,n) for(int i = 1; i < n; ++i)
#define ll long long
#define db double
#define pb push_back
#define vvi vector<vector<int> >
#define vi vector<int>
using namespace std;

const int N = 20000+8;
const int N2 = 1000000 + 7;
const int  N3 = 10;
const int maxlen = 10e5 + 1;
vector<int> tree;
int n,a,m,b,k,H,h1, mins=maxlen, maxs=-1,imin=0,imax=0;
vvi z;
string s,s0;
db ans = 0.0;
//ll dp[N3][N];
int an[10];
//vi l, h, anss;
vi sh;
vvi dp;
vector<string> ss;
vector<pair<db, db> > at;
bool comp(pair<db, db> a, pair<db, db> b) {
	return a.first > b.first;
}

//aaaadafwqvvv
//ada
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> s;
	cin >> n;
	ss.resize(n);
	int a1 = 0;
	int a2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s0;
		if (s0 == s)return cout << "YES", 0;
		if (s0[0] == s[1])a1 = 1;
		if (s0[1] == s[0])a2 = 1;
	}

	ans = a1 + a2;
	return cout << (ans == 2 ? "YES" : "NO"), 0;
}

