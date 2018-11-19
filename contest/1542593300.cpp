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

char x[3];
int n;
char s[101][3];

int main(int argc, char *argv[]) {
	std::cin.sync_with_stdio(false);std::cin.tie(nullptr);
	#if DEBUG
	freopen("/tmp/in.txt", "r", stdin);
	while(cin >> x >> n)
	#else
	cin >> x >> n;
	#endif
	{
		bool ok = false;
		for(int i=0;i<n;i++) {
			cin >> s[i];
			if (s[i][0] == x[0] && s[i][1] == x[1]) {
				ok = true;
			}
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if (s[i][1] == x[0] && s[j][0] == x[1]) {
					ok = true;
				}
			}
		}
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}