#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string des;
	int n;
	cin >> des;
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (des == a[i])
		{
			flag = true;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string tmp;
			tmp = "";
			tmp.push_back(a[i][1]);
			tmp.push_back(a[j][0]);
			if (tmp == des)
			{
				flag = true;
			}
		}
	}

	if (flag)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
}