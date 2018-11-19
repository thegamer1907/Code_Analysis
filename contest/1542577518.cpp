#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <tuple>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
template<typename T> T gcd(T x, T y){ if(x<y) swap(x,y); while(y>0) { T f = x%y; x = y; y = f; } return x; }
template<typename T> pair<T, T> exgcd(T x, T y){ if(x<y) swap(x,y); pair<T, T> r = make_pair(1, 0); while(y>0) { T f = x%y; r = make_pair(r.second, r.first - (x/y) * r.second); x = y; y = f; } return r; }

#ifndef ONLINE_JUDGE
#define DEBUG 1
#else
#define DEBUG 0
#endif

const int maxn = 1e5;
const int maxk = 4;

int n, k;

int a[maxn][maxk];

int main(int argc, char *argv[]) {
	std::cin.sync_with_stdio(false);std::cin.tie(nullptr);
	#if DEBUG
	freopen("/tmp/in.txt", "r", stdin);
	while(cin >> n >> k)
	#else
	cin >> n >> k;
	#endif
	{
		memset(a, 0, sizeof(a));
		int cnt[16]; memset(cnt, 0, sizeof(cnt));
		for(int i=0;i<n;i++) {
			int z = 0;
			for(int j=0;j<k;j++)
				cin >> a[i][j], z = z*2 + a[i][j];
			cnt[z]++;
		}
		
		int x = (1<<k);
		
		bool ok = false;
		
		if (cnt[0]) ok = true;
		else for(int i=1;i<x;i++) {
			for(int j=1;j<x;j++) {
				if (cnt[i] && cnt[j] && !(((i&j)) & (i|j))) ok = true;
			}
		}
		
		cout << (ok ? "YES" : "NO" ) << endl;
	}
	return 0;
}