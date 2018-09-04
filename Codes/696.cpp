#include <bits/stdc++.h>
using namespace std;

bool get_sum(int num)
{
	int ans = 0;
	for(int i = 1; num / i > 0; i *= 10)
	{
		int c = num % (i * 10);
		c /= i;
		ans += c;
	}
	return ans == 10;
}

int main (int argc, char *argv[])
{
	int k;
	scanf("%d", &k);
	for(int i = 19; ; i += 9)
	{
		if(get_sum(i))
		{
			--k;
			if(k == 0)
			{
				printf("%d", i);
				break;
			}
		}
	}

	return 0;
}

