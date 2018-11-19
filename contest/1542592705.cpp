#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
string str[105],s;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int i,j,n;
	cin>>s>>n;
	for(i=1;i<=n;++i)
	{
		cin>>str[i];
		if(str[i]==s){cout<<"YES";return 0;}
	}
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
            string tmp;
            tmp.push_back(str[i][1]);
            tmp.push_back(str[j][0]);
            if(tmp==s){cout<<"YES";return 0;}
		}
	}
	cout<<"NO";
	return 0;
}
