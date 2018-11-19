#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int n;
bool f=false,F=false;
char ch[110][2]; 

int main()
{
	scanf("%s",ch[0]);
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",ch[i]);
		if(ch[i][0]==ch[0][0]&&ch[i][1]==ch[0][1])return printf("YES\n")*0;
		if(ch[i][0]==ch[0][1])f=true;
		if(ch[i][1]==ch[0][0])F=true;
	}
	if(f&&F)printf("YES\n");
	else printf("NO\n");
	return 0;
} 