#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
const int maxn = 1e5 + 5;

char t[5],s[105][5];
int n;

int main()
{
	scanf("%s",t);
	scanf("%d",&n);
	int l = 0,r = 0;
	for (int i = 1;i <= n;i++)
	{
		scanf("%s",s[i]);
		if (s[i][0] == t[1]) r = 1;
		if (s[i][1] == t[0]) l = 1;
		if (s[i][0] == t[0] && s[i][1] == t[1]) l = 1,r = 1;
	}
	if (l == 1 && r == 1) {puts("YES");}
	else puts("NO");

	


	return 0;
}