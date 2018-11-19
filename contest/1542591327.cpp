#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <iostream>
#include <algorithm>
#define MAX 1000007
#define MAXN 1007
#define MAXM 1007
#define INF  0x3f3f3f3f
#define NINF 0xc0c0c0c0
#define MOD 1000000007
using namespace std;
typedef long long LL;
typedef vector<int> Vec;
typedef vector<Vec> Mat;
//================================================================================================
char s0[3],s[105][3];
int main(){
	scanf("%s",s0);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%s",s[i]);
	bool stage[2]={0};
	for(int i=1;i<=n;i++)
	{
		if(s[i][0]==s0[0] && s[i][1]==s0[1])
			stage[0]=stage[1]=1;
		if(s[i][0]==s0[1])
			stage[0]=1;
		if(s[i][1]==s0[0])
			stage[1]=1;
	}
	if(stage[0] && stage[1])printf("YES\n");
	else
		printf("NO\n");
    return 0;
}
