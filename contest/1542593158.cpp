#include<iostream>
#include<vector>
using namespace std;
vector<int>V1, V2;
int main()
{
	char s[10];
	cin >> s;
	int num;
	bool flag = false, flag2 = false,flag3=false;
	cin >> num;
	char temp[10];
	for (int i = 1;i <= num;i++)
	{
		cin >> temp;
		if (temp[0] == s[0] && temp[1] == s[1])flag = true;
		if (temp[1] == s[0])flag2 = true;
		if (temp[0] == s[1])flag3 = true;
	}
	if (flag || flag2&&flag3)puts("YES");
	else puts("NO");
	return 0;

}