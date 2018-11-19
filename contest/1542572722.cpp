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
	char s[3];
	int n;
	scanf("%s %d", s, &n);

	int p = 0, q =0;
	for (int i = 0; i < n; i++) {
		char a[3];
		scanf(" %s", a);

		if (a[1] == s[0])
			p = 1;
		if (a[0] == s[1])
			q = 1;

		if (strcmp(a, s) == 0 || p && q) {
			printf("YES");
			return 0;
		}
		
	}

	printf("NO");
	return 0;
}