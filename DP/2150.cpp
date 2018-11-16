#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;
typedef long long ll;
#define T int t_;Read(t_);while(t_--)
#define dight(chr) (chr>='0'&&chr<='9')
#define alpha(chr) (chr>='a'&&chr<='z')
#define INF (0x3f3f3f3f)
#define maxn (100005)
#define hashmod 100000007
#define ull unsigned long long
void Read(int &n){char chr=getchar(),sign=1;for(;!dight(chr);chr=getchar())if(chr=='-')sign=-1;
    for(n=0;dight(chr);chr=getchar())n=n*10+chr-'0';n*=sign;}
void Read(ll &n){char chr=getchar(),sign=1;for(;!dight(chr);chr=getchar())if
    (chr=='-')sign=-1;
    for(n=0;dight(chr);chr=getchar())n=n*10+chr-'0';n*=sign;}
int n,m,a[maxn],c[maxn],ans[maxn],x;
int main()
{
 //   freopen("a.in","r",stdin);
 //   freopen("b.out","w",stdout);
    Read(n),Read(m);
    for(int i = 1;i <= n;++i) {Read(a[i]),c[a[i]]++;if(c[a[i]]==1) ans[1]++;}
    for(int i = 2;i <= n;++i) {
        c[a[i-1]]--;
        if(c[a[i-1]]==0)ans[i]=ans[i-1]-1;
        else ans[i]=ans[i-1];
    }
    for(int i = 1;i <= m;++i) Read(x),printf("%d\n",ans[x]);
    return 0;
}