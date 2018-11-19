#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
#define bitcount __builtin_popcountll
#define ll long long
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
string arr[105];
int main()
{
	int i,j,k;
	string s;
	cin>>s;
	int n;
	sd(n);
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			string temp = arr[i]+arr[j];
			if(temp.find(s)!=string::npos)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}