#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char **argv) {
	int n, a = 0, b = 0;
	scanf("%d", &n);
	while (n-- != 0) {
		int x, y;
		scanf("%d%d", &x, &y);
		if (x > y)
			++a;
		else if (y > x)
			++b;
	}
	if (a > b)
		puts("Mishka");
	else if (b > a)
		puts("Chris");
	else
		puts("Friendship is magic!^^");
	return 0;
}
