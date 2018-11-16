#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("omit-frame-pointer")
#pragma GCC optimize("unroll-loops")
#pragma comment(linker, "/stack:200000000")
#include <bits/stdc++.h>
#include <stdio.h>
#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <set>
#include <limits>

#define pause system("pause")
#define endl "\n"
#define DBG(x) cerr << #x << " = " << (x) <<"\n"
#define forn(i,n) for(int i = 0;i < n;i++)
#define forr(i,n) for(int i = n;i >= 0;i--)
#define fori(i,a,n) for(int i = a;i < n;i++)
#define forall(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define IOSTUFF ios::sync_with_stdio(false);cin.tie(NULL);
#define clr(a,b) memset(a,b,sizeof a)
#define all(x) x.begin(),x.end()
#define present(c,x) ((c).find(x) != (c).end())
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define ppb(x) pop_back(x)
#define ppf(x) pop_front(x)
#define lwb(x) lower_bound(x)
#define upb(x) upper_bound(x)
#define sz(x) ((int)x.size())
#define umap unordered_map
#define ff first
#define ss second
#define count_ones(x) __builtin_popcountll(x)
#define first_one(x) __builtin_ffs(x)
#define leading0(x) __builtin_clz(x)
#define mp make_pair
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;
typedef long long int LLI;
typedef pair<int,int> PII;
typedef pair<double,double> PDD;
typedef pair<LL,LL> PLL;
typedef vector<int> VI;
typedef vector<double> VD;
typedef vector<float> VF;
typedef vector<bool> VB;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<LL> VLL;
typedef vector<PII > VPII;
typedef vector<PLL > VPLL;
typedef vector<VPII > GRAPH;
typedef vector<VLL > ADY_MATRIX;

const double EPS = 1E-9;
const double PI = 3.1415926535897932384626433832795;
/*********************************************************************************************************************/

template<class T>
void debug(vector<T>vec){for(int i = 0;i < vec.size();i++)cerr << vec[i] << " ";cerr << endl;}
template<class T>
void debug(vector<vector<T> >vec){for(int i = 0;i < vec.size();i++){for(int ii = 0;ii < vec[i].size();ii++)cerr << vec[i][ii] << " ";cerr << endl;}}

pair<int,int>dirs[4] = {{0,1},{0,-1},{1,0},{-1,0}};

//#define ONLINE_JUDGE 1



void solve(){
	int n;
	cin >> n;
	VI v(n,0);
	int i;
	forn(i,n)cin >> v[i];
	VI v2(n,0);
	v2[0] = v[0];
	fori(i,1,n){
		v2[i] = v2[i-1] + v[i];
	}

	int x,y;
	int best = 0;
	int bi,bj;
	forn(x,n){
		int c[2] = {0,0};
		int extra = (x != 0) ? v2[x-1] : 0;
		fori(y,x,n){
			c[v[y]]++;
			if(c[0]+v2[n-1]-v2[y]+extra >best){
				best = c[0]+v2[n-1]-v2[y]+extra;
				bi = x;
				bj = y;
			}
		}
	}
	//DBG(bi);DBG(bj);
	cout << best << endl;
}

int main() {
	#ifndef ONLINE_JUDGE 
	//	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
	#endif
//	IOSTUFF;
//	cin.tie(NULL);
	int testcases = 1;
	while(testcases-- != 0){
		solve();
		if(testcases != 0)cout << "---------- END OF TEST " << testcases << " -------------" << endl;
	}
}












