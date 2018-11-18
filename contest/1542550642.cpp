#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include<math.h>
using namespace std;
#define shehata ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0)
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
int main() {
	shehata;
	int h, m, s, t1, t2,c=0;
	cin >> h >> m >> s >> t1 >> t2;
	if (t1>t2)
		swap(t1, t2);
	(t1 <= h && h<t2) ?c++:c;
	(5 * t1 <= m && m<5 * t2) ? c++ : c;
	(5 * t1 <= s && s<5 * t2) ? c++ : c;
	cout << (c == 0 || c == 3 ? "YES" : "NO");
	return 0;
}