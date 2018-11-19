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

int c(int h, int m, int s) {
	return h*60*60+m*60+s;
}

int main(int argc, char *argv[]) {
	std::cin.sync_with_stdio(false);std::cin.tie(nullptr);
	
	int h,m,s,t1,t2;
	
	#if DEBUG
	freopen("/tmp/in.txt", "r", stdin);
	while(cin >> h >> m >> s >> t1 >> t2)
	#else
	cin >> h >> m >> s >> t1 >> t2;
	#endif
	{
		// 60*60*12 points
		int m1 = c(t1,0,0);
		int m2 = c(t2,0,0);
		int mh = c(h,m,s);
		int mm = m*12*60+s;
		int ms = s*12*60;
		
		bool ok = m1 == m2;
		
		if (m1>m2) swap(m1, m2);
		
		bool dirup = true;
		bool dirdown = true;
		
		if (m1 < mh && mh < m2) dirup = false;
		if (m1 < mm && mm < m2) dirup = false;
		if (m1 < ms && ms < m2) dirup = false;
		
		if (m1 > mh || mh > m2) dirdown = false;
		if (m1 > mm || mm > m2) dirdown = false;
		if (m1 > ms || ms > m2) dirdown = false;
		
		#if DEBUG
		printf("%d %d: t1=%d t2=%d, mh=%d mm=%d ms=%d\n", dirup, dirdown,m1,m2,mh,mm,ms);
		#endif
		
		if (dirup || dirdown) ok = true;
		
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}