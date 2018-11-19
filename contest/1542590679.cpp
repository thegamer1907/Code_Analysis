#include <bits/stdc++.h>
using namespace std;
char getch()
{
	char ch;
	for(ch=getchar();!isalpha(ch);ch=getchar());
	return ch;
}
int n;
bool a[2];
int main()
{
	char x=getch(),y=getch();
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		char p=getch(),q=getch();
		if(p==x && q==y)
		{
			puts("YES");
			return 0;
		}
		if(p==y) a[0]=1;
		if(q==x) a[1]=1;
	}
	puts(a[1] && a[0]?"YES":"NO");
	return 0;
} 
