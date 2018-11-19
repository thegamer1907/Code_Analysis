#include<cstdio>
#include<iostream>
using namespace std;
char s[2];
char str[103][2];
int n;
int main()
{
	cin>>s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  cin>>str[i];
	for(int i=1;i<=n;i++)
		if(s[0]==str[i][0]&&s[1]==str[i][1]) return puts("YES"),0;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=n;j++)
	    if(s[0]==str[i][1]&&s[1]==str[j][0]) return puts("YES"),0;
	puts("NO");
	return 0;
}
