#include <bits/stdc++.h>
using namespace std;
set<char> fi;
set<char> se;
int main()
{
	char password[5];
	char s[5];
	scanf("%s",password);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s);
		if(s[0]==password[0] && s[1]==password[1])
		{
			printf("YES\n");
			return 0;
		}
		fi.insert(s[0]);
		se.insert(s[1]);
	}
	if(fi.find(password[1])!=fi.end() && se.find(password[0])!=se.end() || fi.find(password[1])!=fi.end() && se.find(password[0])!=se.end())
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
