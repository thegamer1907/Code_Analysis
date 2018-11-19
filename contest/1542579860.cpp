#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

	string pw;
	int n;
	int ans1=0,ans2=0;
	
int main()
{
	//freopen("A.in","r",stdin);
	//freopen("A.out","w",stdout);
	cin>>pw;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		string x;
		cin>>x;
		if(x[0]==pw[0]&&x[1]==pw[1])
		{
			printf("YES\n");
			return 0;
		}
		if(x[1]==pw[0])
			ans1++;
		if(x[0]==pw[1])
			ans2++;
		if(ans1>=1&&ans2>=1)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
return 0;
}
