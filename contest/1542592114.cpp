#include <cstdio>
using namespace std;
char x[200],y[200];
int main() {
	int n,i,j;
	scanf("%c%c",&x[0],&y[0]);
	scanf("%d\n",&n);
	for (i=1;i<=n;i++) scanf("%c%c\n",&x[i],&y[i]);
	for (i=1;i<=n;i++) {
		if (x[i]==x[0] && y[i]==y[0]) {
			puts("YES"); return 0;
		}
		for (j=1;j<=n;j++) if (y[i]==x[0] && x[j]==y[0]) {
			puts("YES"); return 0;
		}
	}
	puts("NO");
}