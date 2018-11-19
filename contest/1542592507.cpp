#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[10];
char a[110][10];
int flag1,flag2,n;

int main()
{
//	freopen("input","r",stdin);
	scanf("%s\n",s);
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++) scanf("%s\n",a[i]);
	for(int i=1;i<=n;i++)
	{
		if(a[i][0]==s[0] && a[i][1]==s[1]){
			cout<<"YES";
			return 0;
		}
		if(a[i][1]==s[0]) flag1=1;
		if(a[i][0]==s[1]) flag2=1;
	}
	if(flag1 && flag2) cout<<"YES";
	else cout<<"NO";
	return 0;
}