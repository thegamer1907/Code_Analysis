/*input
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10

*/
/**
 * Sereja and Suffixes
 * @author: rajsheth23
 */
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#define endl '\n'
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb(n) emplace_back(n)
#define pb(n) push_back(n)
#define F first
#define S second
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vi v(n+1);
	int pos[m+1];
	int suf[n+1];
	for (int i = 1; i < n+1; ++i){
		cin >> v[i];
	}
	for (int i = 1; i < m+1; ++i){
		cin >> pos[i];
	}
	unordered_map<int, int> mp;
	for (int i = n; i >= 1; --i){
		mp[v[i]]++;
		suf[i]=mp.size();
	}
	for (int i = 1; i < m+1; ++i){
		cout << suf[pos[i]] << endl;
	}
	return 0;
}