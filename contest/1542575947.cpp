#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<queue>
#include<cmath>
#include <string>
using namespace std;
const int mod=1000000007;
int n,k;
char ans[3],a[1234][3]; 
bool yc,ni;
int main()
{
	scanf("%s",ans);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		if(a[i][0]==ans[1])ni=1;
		if(a[i][1]==ans[0]) yc=1;
		if(!strcmp(ans,a[i])||(ni&&yc))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
//
