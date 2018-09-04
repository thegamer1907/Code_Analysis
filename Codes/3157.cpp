#include <cstdio>
using namespace std;
int nsize;
int num[100000];

int main()
{
	scanf("%d", &nsize);
	int i = 0;
	int min = 1000000007;
	while (i < nsize)
	{
		scanf("%d", &num[i]);
		if (num[i] < min) min = num[i];
		i++;
	}
	int ans = min;
	int start = min % nsize;
	i = 0;
	while (i < nsize)
	{
		if (num[(start + i) % nsize] - min - i <= 0)
		{
			break;
		}
		ans++;
		i++;
	}
	printf("%d\n", (start+i)%nsize+1);
	return 0;
}