#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
typedef long long ll;
const int mod=1e6;
const int maxn=100000+10;
bool vis[100];
int main()
{
	int a,b,c,t1,t2;
    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
    for(int i=0;i<10;i++);
    for(int i=0;i<10;i++);
    for(int i=0;i<10;i++);
    for(int i=0;i<10;i++);
    int a1=a*2;
    if(b||c) ++a1;
    a1 %= 24;
    int b1 = b/5*2;
    if(b%5!=0) ++b1;
    if(b%5==0 && c) ++b1;
    int c1 = c/5*2;
    if(c%5!=0) ++c1;
    vis[a1] = vis[b1] = vis[c1] = true;
    int flag1=1, flag2=1;
    if(t1>t2) swap(t1, t2);
    for(int i=t1*2;i<=t2*2;i++) if(vis[i]) flag1=0;
    for(int i=t2*2;i<=t1*2+24;i++) if(vis[i%24]) flag2=0;
    if(flag1||flag2) printf("YES\n");
    else printf("NO\n");
    return 0;
}

