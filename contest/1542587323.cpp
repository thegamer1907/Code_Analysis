#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
char ch[3],a[300];
int main()
{
	int n;
	scanf("%s", ch);
	scanf("%d", &n); getchar();
	int i;
	for (i = 0; i < n; ++i){
		scanf("%c%c", &a[i * 2], &a[i * 2 + 1]);
		getchar();
	}
	a[i * 2] = a[0];
	a[i * 2 + 1] = a[1];
	a[i * 2 + 2] = '\n';
	int f1 = 0;
	int f = 0;
	int f2 = 0;
	for (int i = 0; i <= n; ++i) {
		if (a[i * 2] == ch[0] && a[i * 2 + 1] == ch[1])
		{
			f = 1;
			break;
		}
		if (a[i * 2] == ch[1])f2 = 1;
		if (a[i * 2 + 1] == ch[0])f1 = 1;
		if (f1&&f2)
		{
			f = 1;
			break;
		}
	}
	if (f)printf("YES\n");
	else printf("NO\n");
	return 0;
}