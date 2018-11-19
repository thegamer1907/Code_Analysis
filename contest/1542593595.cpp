#include <bits/stdc++.h>
using namespace std;
inline int read()
{
	int x = 0, f = 1;
	char ch = 0;
	while (!isdigit(ch)) {ch = getchar();if (ch == '-') f = -1;}
	while (isdigit(ch)) x = x * 10 + ch - 48, ch = getchar();
	return x * f;
}
int n,m;
char s[2];
char s1[110][2];
vector<int>ok,ok1;
int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%s",s1[i]);
		if (s1[i][0] == s[0] && s1[i][1] == s[1]) {puts("YES"); return 0;}
		else 
		{if (s1[i][0] == s[1]) ok1.push_back(i);
		 if (s1[i][1] == s[0]) ok.push_back(i);
		}
	}
	if (ok1.size() == 0 || ok.size() == 0) puts("NO");
//	else if (ok1.size() == 1 && ok.size() == 1 && ok1[0] == ok[0]) puts("NO");
	else puts("YES");
}
