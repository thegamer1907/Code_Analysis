#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int a[17];
int b[10];
int main()
{
	memset(a,0,sizeof(a));
	int n,m;
	cin>>n>>m;
	while(n--)
	{
		for(int j=0;j<m;j++)cin>>b[j];
		a[b[0]+b[1]*2+b[2]*4+b[3]*8]=1;
	}
	for(int i=0;i<=(1<<m);i++)
		for(int j=0;j<=(1<<m);j++)
			if(a[i]&&a[j]&&((i&j)==0)){printf("YES\n");return 0;}
	printf("NO\n");
	return 0;
}