#include <iostream>
#include <cstdio>
using namespace std;
char str[3],a[105][3];
int n;
int main()
{
	scanf("%s%d",str+1,&n);
	for (int i=1;i<=n;++i)
	{
		scanf("%s",a[i]+1);
		if (a[i][1]==str[1] && a[i][2]==str[2])	return puts("YES"),0;
	}
	for (int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			if (a[i][2]==str[1] && a[j][1]==str[2])
				return puts("YES"),0;
	puts("NO");
	return 0;
}