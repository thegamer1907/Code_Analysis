/*
 Author: LargeDumpling
 Email: LargeDumpling@qq.com
 Edit History:
	2017-10-05	File created.
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
char ps[5];
int n;
char str[105][5];
int main()
{
	bool flag=false;
	scanf("%s",ps);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",str[i]);
		if(str[i][0]==ps[0]&&str[i][1]==ps[1])
			flag=true;
		for(int j=1;j<=i;j++)
			if((str[j][1]==ps[0]&&str[i][0]==ps[1])
					||(str[i][1]==ps[0]&&str[j][0]==ps[1]))
				flag=true;
	}
	if(flag) puts("YES");
	else puts("NO");
	fclose(stdin);
	fclose(stdout);
	return 0;
}

