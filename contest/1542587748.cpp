#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;

typedef long long ll;
#define mem(s,v) memset(s,v,sizeof(s))
#define inf 0x3f3f3f3f
#define maxn 110

int n;
char s[2],a[maxn][2];

int main()
{
	int i,j;
	scanf("%s",s);
	scanf("%d",&n);
	for(i=0;i<n;++i) scanf("%s",a[i]);
	int flag=0;
	for(i=0;i<n;++i){
		if(a[i][0]==s[0] && a[i][1]==s[1]) flag=1;
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			if(a[i][1]==s[0] && a[j][0]==s[1]) flag=1;
		}
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}

/*
ya
4
ah
ya
to
ha
*/
