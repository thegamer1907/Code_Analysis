#include <bits/stdc++.h>
using namespace std;
char s[3];
char str[105][3];
int main(){
	cin>>s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>str[i];
	bool ok=false;
	for(int i=1;i<=n;i++)if(s[0]==str[i][0]&&s[1]==str[i][1])ok=true;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(s[0]==str[i][1]&&s[1]==str[j][0])ok=true;
	if(ok)printf("YES\n");
	else printf("NO\n");
}

