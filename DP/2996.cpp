#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll ans=0,i,j,n;
	cin >> n;
	ll visited[n]={0};
	string s1,s2;
	cin >> s1;
	cin >> s2;
	for(i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
		{
			if(i<(n-1) && s1[i+1]!=s2[i+1] && visited[i]==0 && s1[i]!=s1[i+1])
			{
				ll temp=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=temp;
				visited[i]=1;
				visited[i+1]=1;
				ans++;
			}
			else
			{
				visited[i]=1;
				ans++;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}