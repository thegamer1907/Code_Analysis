#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
const int MAXN=110;
string s[MAXN],key;
int n,flag;
int main()
{
	//freopen("A.in","r",stdin);
	cin>>key;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)   cin>>s[i];
	for(int i=1;i<=n;i++)
		if( s[i][0]==key[0] && s[i][1]==key[1] )   { flag=1;break ; }
	if( !flag )
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if( s[i][1]==key[0] && s[j][0]==key[1] )   { flag=1;break ; }
	}
	if( flag )   printf("YES\n");
	else   printf("NO\n");
	return 0;
}
