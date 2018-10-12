#include <cstdio>
#include <cstring>
using namespace std;
#define maxN 1000
#define maxLen 500

int n, m;
int al[maxN], bl[maxN];
char a[maxN][maxLen + 1];
char b[maxN][maxLen + 1];
int both;

bool same(int x, int y) {
	return strcmp(a[x], b[y]) == 0;
}

bool find(int id) {
	for (int i = 0; i < n; i++)
		if (same(i, id))
			return true;
	return false;
}

int main() {
	both = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", a[i]);
		al[i] = strlen(a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s", b[i]);
		bl[i] = strlen(b[i]);
		if (find(i))
			both++;
	}
	n -= both;
	m -= both;
	bool win = (both & 1) ? n >= m : n > m;
	printf(win ? "YES\n" : "NO\n");
	return 0;
}