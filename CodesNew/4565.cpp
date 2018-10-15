#include <bits/stdc++.h>

using namespace std;
const int MAXN = 500100;

int main()
{
	int n, a[MAXN], r, ptr;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	sort(a, a + n);
//	for(int i = 0; i < n; ++i)
//		fprintf(stderr, "%d ", a[i]);
//	printf("\n");
	r = n, ptr = n / 2;
	for(int i = 0; i < n / 2; ++i)
	{
		while((ptr < n && 2 * a[i] > a[ptr]))
			ptr++;
		if(ptr == n)
			break;
		r--;
//		fprintf(stderr, "%d %d %d\n", i, ptr, r);
		ptr++;
	}
	printf("%d\n", r);
}