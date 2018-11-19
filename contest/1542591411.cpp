#include<bits/stdc++.h>
using namespace std;

int n;
char c[5],k[105][5];
bool h[35],t[35];

int main()
{
	scanf("%s%d",c,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",k[i]);
		if(!strcmp(k[i],c))return puts("YES"),0;
		h[k[i][0]-'a']=1,t[k[i][1]-'a']=1;
	}
	puts(t[c[0]-'a']&&h[c[1]-'a']?"YES":"NO");
	return 0;
}
