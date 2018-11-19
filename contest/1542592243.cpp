#include<bits/stdc++.h>
using namespace std;
char s[3],x[200][3];
int main()
{
	int i,j,k;
	int n;
	scanf("%s",s);
	scanf("%d",&n);
	int ok1,ok2,ok;
	ok1=ok2=ok=0;
	for(i=1;i<=n;i++){
		scanf("%s",x[i]);
		if(strcmp(x[i],s)==0) ok=1;
		if(x[i][1]==s[0]) ok1=1;
		if(x[i][0]==s[1]) ok2=1;
	}
	if(ok||(ok1&&ok2)) printf("YES");
	else printf("NO");
	
	return 0;
}
