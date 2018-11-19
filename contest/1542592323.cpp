#include <cstdio>

int n;
char pw[5],ch[5];
bool b1,b2;

int main() {
	scanf("%s%d",pw,&n);
	for (int i=1;i<=n;i++) {
		scanf("%s",ch);
		if (ch[1] == pw[0]) b1 = true;
		if (ch[0] == pw[1]) b2 = true;
		if (ch[0] == pw[0] && ch[1] == pw[1]) {
			b1 = b2 = true;
			break;
		}
	}
	puts((b1 && b2) ? "YES" : "NO");
}