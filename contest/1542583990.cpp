#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string known[205];

int main()
{
	string pass;
	cin >> pass;
	int N;
	scanf("%d", &N);
	for (int i(0); i < N; ++i)
	{
		cin >> known[i];
	}
	bool judge(false);
	for (int i(0); i < N; ++i)
	{
		for (int j(0); j < N; ++j)
		{
			string x;
			x += known[i][1];
			x += known[j][0];
			if (pass == x || pass == known[i])
			{
				judge = true;
			}
		}
	}
	if (judge)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
