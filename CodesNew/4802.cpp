#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
	int n, i, j;
	scanf("%d",&n);
	int a[n+1],ans=n,m=(n/2)+1;
	for (i = 1; i <=n; i++)
		scanf("%d",&a[i]);
	sort(a+1, a+n+1);
	for (i = m,j=1; i<=n && j<m; i++)
		if (a[j] * 2 <= a[i]) {
			ans--;
			j++;
		}
	printf("%d\n",ans);
	return 0;
}