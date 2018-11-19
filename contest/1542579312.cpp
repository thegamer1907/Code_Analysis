#include<bits/stdc++.h>
using namespace std;
char xx[1000][3];
char a,b;
int m;
int main()
{
	scanf("%s",&xx[0]);
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{	scanf("%s",&xx[i]);
	if(xx[i][0]==xx[0][0]&&xx[i][1]==xx[0][1]){cout<<"YES"<<endl;return 0;}}
	for(int i=1;i<=m;i++)
		for(int k=1;k<=m;k++)
		{
			if(xx[i][1]==xx[0][0]&&xx[k][0]==xx[0][1]){cout<<"YES"<<endl;return 0;}
		}
	cout<<"NO"<<endl;
	return 0;
}	

