#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
int n;
bool flag, ok;
char a[5], b[5];
int main() {
	scanf("%s", a);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", b);
		if(b[1] == a[1] && b[0] == a[0])flag = 1, ok = 1;
		if(b[1] == a[0])flag = 1;
		if(b[0] == a[1])ok = 1;
	}
	if(ok && flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}