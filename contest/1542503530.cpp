#include<cstring>
#include<bits/stdc++.h>

using namespace std;

string now;

bool f1,f2;

int main()
{
	string ans;
	cin>>ans;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>now;
		if(now==ans)
		{
			cout<<"YES";
			return 0;
		}
		if(now[0]==ans[1])f1=true;
		if(now[1]==ans[0])f2=true;
	}
	if(f1&&f2)cout<<"YES";
	else cout<<"NO";
}