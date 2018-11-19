#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>

#define MAX(a,b) a > b ? a : b
#define MIN(a,b) a < b ? a : b
//#define scanf scanf_s

using namespace std;

char ch[2];
char know[200][2];

int main()
{
	cin >> ch;
	int n;
	cin >> n;
	for (int i(1); i <= n; ++i)cin >> know[i];
	char a1 = ch[0], a2 = ch[1];
	bool num1(false), num2(false);
	for (int i(1); i <= n; ++i)
	{
		if (know[i][0] == ch[0] && know[i][1] == ch[1])
		{
			printf("YES\n");
			return 0;
		}
		if (know[i][1] == ch[0])
		{
			num1 = true;
		}
		if (know[i][0] == ch[1])
		{
			num2 = true;
		}
	}
	if (num1 && num2)
	{
		printf("YES\n");
	}
	else printf("NO\n");
	//system("pause");
	return 0;
}
