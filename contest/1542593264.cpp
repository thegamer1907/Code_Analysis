#include<bits/stdc++.h>

using namespace std;
typedef int64_t ll;
typedef long double ld;

char a[120][4];

int main()
{
	cin>>a[0];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	bool check=0;
	for(int i=1;i<=n;i++)
		if(strcmp(a[i],a[0])==0)check=1;
	if(check)
	{
		cout<<"YES\n";
		return 0;
	}
	int cnt1=0,cnt2=0;
	for(int i=1;i<=n;i++)
		{if(a[i][1]==a[0][0])cnt1++;
		if(a[i][0]==a[0][1])cnt2++;
		}
	if(cnt1&&cnt2)
		cout<<"YES\n";
	else cout<<"NO\n";		
}
