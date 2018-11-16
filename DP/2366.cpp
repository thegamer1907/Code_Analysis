#include<iostream>
#include<string>
using namespace std;
string a;
int main()
{
	cin >> a;
	int t = a.size();
	for (int i = 0; i < t; i++) {
		if ((a[i] - '0') % 8 == 0)
		{
			puts("YES");
			printf("%c\n", a[i]);
			return 0;
		}
	}
	for (int i = 0; i < t; i++)
	{
		for (int y = i+1; y < t; y++)
		{
			int t = (a[i] - '0') * 10 + (a[y] - '0');
			if (t % 8 == 0)
			{
				puts("YES");
				printf("%c%c", a[i], a[y]);
				return 0;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		for (int y = i + 1; y < t; y++)
		{
			for (int z = y + 1; z < t; z++)
			{
				int t = (a[i] - '0') * 100 + (a[y] - '0')*10+(a[z]-'0');
				if (t % 8 == 0)
				{
					puts("YES");
					printf("%c%c%c", a[i], a[y], a[z]);
					return 0;
				}
			}
		}
	}
	puts("NO");
}