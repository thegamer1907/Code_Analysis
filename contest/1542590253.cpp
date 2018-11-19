
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
	char ans[10];
	char tmp[105][10];
	cin >> ans;
	int n;
	cin >> n;
	bool flag = false;
	bool f1 = false, f2 = false;
	for (int i = 0; i < n; i++) {
		cin >> tmp[i];
		if (strcmp(ans, tmp[i]) == 0)flag = true;
		if (tmp[i][0] == ans[1])f2 = true;
		if (tmp[i][1] == ans[0])f1 = true;
	}
	if (flag||(f1&&f2))cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}