#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<map>
using namespace std;
#define ll long long
const int maxm = 505;
const ll INF = 1e16;
int a[100006];
int main()
{
	int n, i, j, k, sum;
	scanf("%d", &n);
	int id, now;
	now = 2000000000;
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < i) sum = i - 1;
		else
		{
			sum = ((a[i] - i + 1) / n)*n + (i - 1);
			if (sum < a[i]) sum += n;
		}
		//printf("%d\n", sum);
		if (sum < now)
			now = sum, id = i;
	}
	printf("%d\n", id);
	return 0;
}