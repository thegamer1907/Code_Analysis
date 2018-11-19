#include <bits/stdc++.h>
# define pb push_back
using namespace std;
int n,m;
int arr[200005],tmp[200005];
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string tmp=a[i]+a[j];
			if(tmp.find(s)!=-1)
			{
				ans=1;
				break;
			}
		}
		if(ans)
		break;
	}
	if(ans)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}