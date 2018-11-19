#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
bool vis1[100005],vis2[100005];
int main (){
	char s[5],t[5];
	scanf ("%s",s);
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{scanf ("%s",t);
	if (s[0]==t[0]&&s[1]==t[1]) {puts("YES");return 0;}
	vis1[t[0]-'a']=1;
	vis2[t[1]-'a']=1;
	}
	if (vis2[s[0]-'a']&&vis1[s[1]-'a'])
	{puts("YES");return 0;}
	puts("NO");
	return 0;
}
