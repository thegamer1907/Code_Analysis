#include<bits/stdc++.h>

using namespace std;
string s[105];
int main()
{
	string ans;cin>>ans;
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]==ans||(s[i][0]==ans[1]&&s[i][1]==ans[0]))
		{
			cout<<"YES";
			return 0;
		}

	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int ok=0;
			if(s[i][0]==ans[1]&&s[j][1]==ans[0])ok=1;
			if(s[i][1]==ans[0]&&s[j][0]==ans[1])ok=1;
			if(ok)
				{cout<<"YES";return 0;}
		}
	}
	cout<<"NO";
}