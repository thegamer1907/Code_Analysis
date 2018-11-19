#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char s[10],c[1000][10];
int n;
int main()
{
	bool flag1=0,flag2=0;
	scanf("%s",s);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",c[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if((c[i][0]==s[1]&&c[i][1]==s[0])||(c[i][1]==s[1]&&c[i][0]==s[0]))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		if(c[i][1]==s[0]&&c[j][0]==s[1])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}

	cout<<"NO"<<endl;
	return 0;
}
