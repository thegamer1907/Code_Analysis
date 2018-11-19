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
#define MOD 60
using namespace std;
typedef long long LL;
typedef vector<int> Vec;
typedef vector<Vec> Mat;
//================================================================================================

int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	t1=t1*5%MOD;
	t2=t2*5%MOD;
	h=h*5%MOD;
	bool stage,stage_t=1;
	if(t1>t2)t2+=60;
	for(int t,i=t1;i<t2;i++)
	{
		t=i%60;
		if(t==h || t==m || t==s)stage_t=0;
	}
	stage=stage||stage_t;
	stage_t=1;
	t2%=60;
	if(t1<t2)
		t1+=60;
	for(int t,i=t2;i<t1;i++)
	{
		t=i%60;
		if(t==h || t==m || t==s)stage_t=0;
	}
	stage=stage||stage_t;
	if(stage)printf("YES\n");
	else printf("NO\n");
    return 0;
}
