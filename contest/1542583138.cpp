#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<cctype>
using namespace std;
const int maxn=105;

int N;
char key[5],word[maxn][5];

int main()
{
	scanf("%s",key);
	scanf("%d",&N);
	for(int i=1;i<=N;i++) scanf("%s",word[i]);
	bool ok=0;
	for(int i=1;i<=N;i++)
	for(int j=1;j<=N;j++)
	{
		if(word[i][1]==key[0]&&word[j][0]==key[1]) ok=1;
		if(ok) break;
	}
	for(int i=1;i<=N;i++)
		if(key[0]==word[i][0]&&key[1]==word[i][1]) ok=1;
	if(ok) printf("YES\n");
	else printf("No\n");
	return 0;
}