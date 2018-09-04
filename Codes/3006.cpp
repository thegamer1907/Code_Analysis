#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000005;
int nxt[maxn],is[maxn];
char s[maxn];
int main(int argc, char const *argv[])
{
	scanf("%s",s);int len = strlen(s);
	int k = -1,j = 0;nxt[0] = -1;
	while(j<len)
	{
		if(k == -1||s[k] == s[j])nxt[++j] = ++k;
		else k = nxt[k];
	}
	for(int i = 1;i< len;i++)is[nxt[i]]++;
	j = len;
	while(~j)
	{
		j = nxt[j];
		if(j == 0)break;
		if(is[j])
		{
			for(int i = 0;i<j;i++)printf("%c",s[i] );puts("");
				return 0;
		}
	}
	puts("Just a legend");
	return 0;
}