#include<bits/stdc++.h>
using namespace std;
char ch[110][5];
int n;


int main()
{
	scanf("%s",ch[0]);
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%s",ch[i]);
	for(int i=1;i<=n;i++)
	{
		if(ch[i][0]==ch[0][0]&&ch[i][1]==ch[0][1]) 
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ch[i][1]==ch[0][0]&&ch[j][0]==ch[0][1])
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
