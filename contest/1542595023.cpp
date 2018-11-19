#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))

string a[105];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string t=a[i]+a[j];
			for(int i=0;i<t.size()-1;i++)
			if(t[i]==s[0]&&t[i+1]==s[1])
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}