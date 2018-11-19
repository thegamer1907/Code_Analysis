#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath> 
#include <vector>
#define N 100005
using namespace std; 

int n;bool f[5];
char s[5],t[5];

int main()
{
	scanf("%s%d",s,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",t);
		if(t[0]==s[0]&&t[1]==s[1]) {printf("YES");return 0;}
		if(t[0]==s[1]) f[1]=1;
		if(t[1]==s[0]) f[0]=1;
	}
	if(f[0]&&f[1]) printf("YES");
	else printf("NO");
	return 0;
} 
