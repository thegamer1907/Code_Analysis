#include <bits/stdc++.h>
using namespace std;

int n;
char t[2],s[105][2];

void work()
{
	scanf("%s\n%d\n",t,&n);
	for (int i=1; i<=n; i++)  scanf("%s",s[i]);
	for (int i=1; i<=n; i++)
		if ((s[i][0]==t[0])&&(s[i][1]==t[1]))
			puts("YES"),exit(0);
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			if ((s[i][1]==t[0])&&(s[j][0]==t[1]))
				puts("YES"),exit(0);
	puts("NO");
}

int main()
{
	work();
	return 0;
}
