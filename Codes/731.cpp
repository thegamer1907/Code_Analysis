#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[])
{
	int k;
	scanf("%d", &k);
	for (int i = 1;i <= 100000000;++i)
	{
		int temp = i;
		int ans = 0;
		while (temp)
		{
			ans += temp % 10;
			temp /= 10;
		}
		if (ans == 10) k--;
		if (k == 0)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
}

