#include <cstdio>
using namespace std;
const int N = 105;
char s[5];
int n;
char a[N][5];
int main() {
	scanf("%s%d", s + 1, &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", a[i] + 1);
		if(a[i][1] == s[1] && a[i][2] == s[2]) {
			printf("yes\n");
			return 0;
		}
		for(int j = 1; j <= i; j++) {
			if((a[i][2] == s[1] && a[j][1] == s[2]) || (a[i][1] == s[2] && a[j][2] == s[1])) {
				printf("yes\n");
				return 0;
			}
		}
	}
	printf("no\n");
	return 0;
}

