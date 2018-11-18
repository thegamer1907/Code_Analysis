#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string tar;
	cin>>tar;
	int n;
	cin>>n;
	int i;
	int a=0,b=0;
	for(i=1; i<=n; i++)
	{
		string now;
		cin>>now;
		if(n==1)
		{
			if(now==tar) cout<<"YES";
			else if(now[0]==tar[1]&&now[1]==tar[0]) cout<<"YES";
			else cout<<"NO";
			return 0;
		}
		if(now==tar)
		{
			cout<<"YES";
			return 0;
		}
		if(now[0]==tar[1]) a=1;
		if(now[1]==tar[0]) b=1;
	}
	if(a==1&&b==1) cout<<"YES";
	else cout<<"NO";
} 