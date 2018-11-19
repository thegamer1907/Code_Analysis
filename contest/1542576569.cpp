#include<iostream>
#include<cstdio>
using namespace std;
char s[10];
char t[10];
int n;
bool l1,l2,r1,r2;
int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%s",t);
		if (s[0]==t[0] && s[1]==t[1]) l1=1;
		if (s[0]==t[1]) l2=1;
		if (s[1]==t[0]) r1=1;
		if (l1||(l2&&r1)) {printf("YES");return 0;}
	}
	printf("NO");
}
