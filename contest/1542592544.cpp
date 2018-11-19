#include <cstdio>
using namespace std;
bool test(char a, char b, char c, char d) {
	return a == b && c == d;
}
char ack[100][3];
int main(int argc, char const *argv[])
{
	char pswd[3];
	scanf("%s", pswd);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s", ack[i]);
	}
	bool ans = false;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (
				test(pswd[0], ack[i][0], pswd[1], ack[i][1]) ||
				test(pswd[0], ack[i][1], pswd[1], ack[j][0])
			) {
				ans = true;
			}
		}
	}
	if (ans) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
