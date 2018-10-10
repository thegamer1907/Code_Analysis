#include<cstdio>

const int maxn = 1e5;
int a[maxn];

int main()
{
	int n;
	scanf("%d", &n);
	int mn = 1e9;
	int mni = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", a+i);
		if (a[i] < mn) {
			mn = a[i];
			mni = i;
		}
	}

	for (int off = mn, i = mn%n;; i++) {
		if (a[i%n] - off <= 0) {
			printf("%d\n", (i%n)+1);
			break;
		}

		off++;
	}


	return 0;
}
