#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <stack>
#include <cmath> 
#include <queue>
#include <deque>
#include <map>
#include <set>
#define MAXN 200
#define MAXM 111111
#define MAXK 100100
#define MAXR 110
#define MAXL 2200
#define MAXC 100
#define MAXT 100
#define MAXE 100020
#define HPR 311
#define IMP 701819
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;

int main(){
	char pas[2],c[MAXN][2];
	bool f1=false,f2=false,f=false;
	scanf("%s",pas);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("\n%s",c[i]);
		if(c[i][1]==pas[0]) f1=true;
		if(c[i][0]==pas[1]) f2=true;
		if(c[i][0]==pas[0]&&c[i][1]==pas[1]) f=true;
	}
	if((f1&&f2)||f) printf("YES\n");
	else printf("NO\n");
	return 0;
}