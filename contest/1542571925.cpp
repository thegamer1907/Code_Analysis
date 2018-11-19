#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char s [3];
	scanf("%s", s);
	int n;
	scanf("%d", &n);
	int first = 0, second = 0;
	for (int i = 0; i < n; ++i)
	{
		char temp [3];
		scanf("%s", temp);
		if (strcmp(temp, s) == 0)
		{
			printf("YES\n");
			return 0;
		}
		if (temp[0] == s[1])
			++second;
		if (temp[1] == s[0])
			++first;
	}
	if (first > 0 && second > 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}