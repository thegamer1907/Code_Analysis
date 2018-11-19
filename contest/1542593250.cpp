#include<cstdio>
#include<cstring>
#include<iostream>
#include<utility>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;
char s[200][2],a,b;
int main()
{
	a = getchar();b = getchar();
	getchar();
	bool ok = 0;
	int n;cin>>n;getchar();
	for(int i=1;i<=n;i++)
	{
		s[i][0]=getchar();
		s[i][1]=getchar();
		getchar();
		if(s[i][0]==a&&s[i][1]==b)ok=1;
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(s[j][1]==a&&s[i][0]==b)ok=1;
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}