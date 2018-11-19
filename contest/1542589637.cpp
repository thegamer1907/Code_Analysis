#include<algorithm>
#include<cstring>
#include<string.h>
#include<iostream>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<string>
#include<utility>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
string s1,s2[110];
int main()
{
	//freopen("attack.in","r",stdin);
	//freopen("attack.out","w",stdout);
	cin>>s1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s2[i];
		if(s2[i]==s1)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s2[i][1]!=s1[0])
			continue;
		for(int j=1;j<=n;j++)
			if(s2[j][0]==s1[1])
			{
				cout<<"YES"<<endl;
				return 0;
			}
	}
	cout<<"NO"<<endl;
    return 0;
}