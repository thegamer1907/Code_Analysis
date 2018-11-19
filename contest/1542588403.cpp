#include<bits/stdc++.h>
using namespace std;

const int max_n = 110;
const int inf   =1e9+7;

bool ok,b1[max_n],b2[max_n];
char s[max_n][3],c[3];
int n;

int main()
{
	scanf("%s%d",&c,&n);
	for(int i=1; i<=n; ++i)
	{
		scanf("%s",s[i]);
		b2[s[i][0]-'a']=true;
		b1[s[i][1]-'a']=true;
		if(s[i][0]==c[0] && s[i][1]==c[1]) ok=true;
	}
	if((b1[c[0]-'a'] && b2[c[1]-'a'])|| ok)
	  printf("YES\n");
	else printf("NO\n");
	return 0;
}
