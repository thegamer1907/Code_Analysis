#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define heap priority_queue
#define mem(a,val) memset(a,val,sizeof(a))
#define y1 asdassa
typedef long long int lli;
typedef pair<int,int> pii;
typedef pair<pair<int,int>,int> piii;
char s[5],s2[5];
int n,m[5],fl;
int main()
{
	scanf("%s %d",s,&n);
	for(int i=1;i<=n;i++)
	{
		scanf(" %s",s2);
		//~ if(s2[0]==s[1] && s2[1]==s[0]) fl=1;
		if(s2[1]==s[1] && s2[0]==s[0]) return printf("YES"),0;
		if(s2[0]==s[1]) m[0]++;
		if(s2[1]==s[0]) m[1]++;
	}
	//~ if(fl==0)
	//~ {
		if(m[0] && m[1]) printf("YES");
		else printf("NO");
	//~ }
	//~ if(fl==1)
	//~ {
		//~ if(m[0]>1 && m[1]>1) printf("YES");
		//~ else printf("NO");		
	//~ }
}
