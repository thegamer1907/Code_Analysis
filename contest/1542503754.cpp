#include <cstdio>  
#include <stack>  
#include <queue>  
#include <cmath>  
#include <vector>  
#include <cstring>  
#include <algorithm>  
#include<set>
#include<iostream>
using namespace std;
const int inf = 0x3f3f3f3f;
const int M = 105;
typedef long long LL;
char a[105][5],s[10],b[5];
int n,flag;
struct Stu {
	int l, r, x;
}stu[M];
int main()
{
	scanf("%s%d", b,&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	for (int i = 0; i < n&&flag==0; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][0] == b[1] && a[j][1] == b[0])
				flag = 1;
			else
				if (a[i][0] == b[0] && a[i][1] == b[1])
					flag = 1;
		}
	}
	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
}