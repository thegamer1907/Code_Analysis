#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e2+20,inf=0x3f3f3f3f;
string s[N],a;
int n;
int main()
{
	cin>>a;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i];
	bool flag=false;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			char x=s[i][1],y=s[j][0];
			if(x==a[0]&&y==a[1])
				flag=true;
		}
	}
	for(int i=1;i<=n;i++)
		if(s[i]==a)
			flag=true;
	if(flag)
		puts("YES");
	else
		puts("NO");
	return 0;
}