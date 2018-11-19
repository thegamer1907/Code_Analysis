#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
string pass;
string bark[1000];
int main()
{
	cin>>pass;
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		cin>>bark[i];
		if(bark[i]==pass)
			ans=1;
	}
	if(!ans)
	{
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				if(bark[i][1]==pass[0]&&bark[j][0]==pass[1])
					ans=1;
	}
	if(ans)
		printf("YES");
	else
		printf("NO");
	return 0;
}
