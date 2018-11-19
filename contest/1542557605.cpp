#include <bits/stdc++.h>
using namespace std;

char s[10],ks[10];
int n,x,y;

int main()
{
	scanf("%s %d",s,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",ks);
		if(ks[0]==s[1]) x++;
		if(ks[1]==s[0]) y++;
		if(ks[0] == s[0] && ks[1] == s[1]){
			x++;
			y++;
		}
	}
	if(x>0 && y>0) printf("YES\n");
		else printf("NO\n");
}
