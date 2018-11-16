#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool vis[s.length()];
	bool vis2[s.length()];
	memset(vis,false,sizeof(vis));
	memset(vis2,false,sizeof(vis2));
	bool f_ab_1 = false;
	bool f_ba_1 = false;
	for(int i=0;i<int(s.length());i++)
	{
		if(s[i]=='B' && i+1<int(s.length()) && vis[i]==false && vis[i+1]==false)
		{
			if(s[i+1]=='A')
			{
				f_ba_1 = true;
				vis[i]=true;
				vis[i+1]=true;
				break;
			}
		}
	}
	for(int i=0;i<int(s.length());i++)
	{
		if(s[i]=='A' && i+1<int(s.length()) && vis[i]==false && vis[i+1]==false)
		{
			if(s[i+1]=='B')
			{
				f_ab_1 = true;
				vis[i]=true;
				vis[i+1]=true;
				break;
			}
		}
	}
	bool f_ab_2 = false;
	bool f_ba_2 = false;
	for(int i=0;i<int(s.length());i++)
	{
		if(s[i]=='A' && i+1<int(s.length()) && vis2[i]==false && vis2[i+1]==false)
		{
			if(s[i+1]=='B')
			{
				f_ab_2 = true;
				vis2[i]=true;
				vis2[i+1]=true;
				break;
			}
		}
	}
	for(int i=0;i<int(s.length());i++)
	{
		if(s[i]=='B' && i+1<int(s.length()) && vis2[i]==false && vis2[i+1]==false)
		{
			if(s[i+1]=='A')
			{
				f_ba_2 = true;
				vis2[i]=true;
				vis2[i+1]=true;
				break;
			}
		}
	}
	if(f_ab_1 && f_ba_1)
	{
		cout<<"YES"<<"\n";
	}
	else if(f_ab_2 && f_ba_2)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
	
}

