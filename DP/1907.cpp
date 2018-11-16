#include<iostream>
#include<string>
using namespace std;
int ch[100100];
int x[2];
int main()
{
	string a;
	cin >> a;
	int t = a.size();
	for (int i = 0; i < t-1; i++)
	{
		int ch = 0;
		if (i + 2 < t) {
			if (a[i] == 'A'&&a[i + 1] == 'B'&&a[i + 2] == 'A')
			{
				if (x[0] || x[1])
				{
					puts("YES");
					return 0;
				}
				x[0] = -1; x[1] = -1;
				i += 2;
				ch = 1;
			}
			if (a[i] == 'B'&&a[i + 1] == 'A'&&a[i + 2] == 'B')
			{
				if (x[0] || x[1])
				{
					puts("YES");
					return 0;
				}
				x[0] = -1; x[1] = -1;
				i += 2;
				ch = 1;
			}
		}
		if (!ch) {
			if (a[i] == 'A'&&a[i + 1] == 'B') {
				if (x[1])
				{
					puts("YES");
					return 0;
				}
				x[0] = 1;
			}
			if (a[i] == 'B'&&a[i + 1] == 'A')
			{
				if (x[0])
				{
					puts("YES");
					return 0;
				}
				x[1] = 1;
			}
		}
	}
	puts("NO");
}