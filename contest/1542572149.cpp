#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<cstring>
#include<ctime>
#include<cmath>
#include<limits>
#include<iterator>
#include<functional>
#include<unordered_map>
#include<stack>
#include<bitset>

#define all(v) v.begin(), v.end()
#define setv(ar, val) memset(ar, val, sizeof(ar));
#define ll long long int
#define ull unsigned long long int
#define PI 3.1415926535897932384626433832795
#pragma comment(linker, "/STACK:1073741824")
#pragma warning(disable:4996)
using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

	if (t1 < t2)
		swap(t1, t2);

	double ms = s / 5.0, mm = m / 5.0 + ms / 300, mh = h + mm * 5 / 60;

	bool ok = true;
	for (int i = t1; i != t2 && ok; i = (i + 1) % 13) {
		if (mm >= i && mm <= i + 1 || ms >= i && ms <= i + 1
			|| mh >= i && mh <= i + 1)
			ok = false;
	}

	if (ok) {
		printf("YES");
		return 0;
	}

	ok = true;

	for (int i = t2; i != t1; i++) {
		if (mm >= i && mm <= i + 1 || ms >= i && ms <= i + 1
			|| mh >= i && mh <= i + 1)
			ok = false;
	}

	if (ok) {
		printf("YES");
		return 0;
	}
	
	printf("NO");
	
	return 0;
}