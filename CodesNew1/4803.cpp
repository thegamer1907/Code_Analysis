#include<cstdio>
#include<algorithm>
using namespace std;
int a[500005];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	sort(a + 1, a + 1 + n);
	int ans = n;
	int temp = n / 2 ;
	for (int i = n; i > n / 2; i--)
	{
		while (temp>=1)
		{
			if (a[i] >= 2 * a[temp])
			{
				temp--;
				ans--;
				break;
			}
			else
				temp--;
		}
	}
	printf("%d\n", ans);
}