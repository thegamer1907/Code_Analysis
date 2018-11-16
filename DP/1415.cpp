
#include <iostream>

using namespace std;
int set[110];
int main()
{
	int n;
	while (cin >> n)
	{
		int cnt = 0, max = 0,x=0,y=0;
		for (int i = 0; i < n; i++)
		{
			cin >> set[i];
			if (set[i] == 1)
				cnt--;
			else
				cnt++;
			if (cnt < 0)
			{
				cnt = 0;
			}
			if (cnt > max)
			{
				max = cnt;
				y = i;
			}
		}
		int temp = 0;
		for (int i = y; i >= 0; i--)
		{
			if (set[i] == 1)
				temp--;
			if (set[i] == 0)
				temp++;
			if (temp == max)
			{
				x = i;
				break;
			}
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (x <= i && i <= y)
			{
				if (set[i] == 0)
					count++;
			}
			else
			{
				if (set[i] == 1)
					count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}