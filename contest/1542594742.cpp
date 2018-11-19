#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MAXN=105;
char x[MAXN],y[MAXN];
char a,b;
int main()
{
	cin>>a>>b;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
		if(x[i]==a&&y[i]==b){cout<<"YES";return 0;}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(y[i]==a&&x[j]==b){cout<<"YES";return 0;}
	cout<<"NO";
	
	return 0;
}
