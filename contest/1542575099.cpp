#include <cstdio>
using namespace std;
int main() {
	char t1, t2, a1, a2;
	scanf("%c%c\n", &t1, &t2);
	int n;
	bool f1 = false, f2 = false, f3 = false;
	scanf("%d\n", &n);
	for (int i=1; i<=n; i++) {
		scanf("%c%c\n", &a1, &a2);
		// printf("%d -- %c %c\n", i, a1, a2);
		f1 = f1 || (a1 == t2);
		f2 = f2 || (a2 == t1);
		f3 = f3 || (a1 == t1 && a2 == t2);
	}
	if (f3 || (f1 && f2))
	puts("YES");
	else puts("NO");

	return 0;
}