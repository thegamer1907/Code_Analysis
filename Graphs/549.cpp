#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m, i, j, temp;

	char s[52];

	scanf("%d %d %s", &n, &m, s);

	for (i = 0; i < m; i++) {
		for (j = 0; j < n + 1; j++) {
			if (s[j] == 'B' && s[j + 1] == 'G') {

				s[j] = 'G';

				s[j + 1] = 'B';

				j++;
			}
		}
	}

	printf("%s\n", s);

	return 0;
}
