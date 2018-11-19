#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#define INF 0x7fffffff
#define pb push_back
#define fori for(int i=1;i<=n;i++)
#define forj for(int j=1;j<=n;j++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORLL(i,a,b) for(LL i=a;i<=b;i++)
#define ma(a,b) make_pair(a,b)
using namespace std;
#define eps 1e-8
#define pi acos(-1.0)
#define s(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sd(x,y) scanf("%d%d",&x,&y)
#define sdll(x,y) scanf("%lld%lld",&x,&y)
#define mem(a,x) memset(a,x,sizeof(a))
#define pa pair<int,int>
typedef long long LL;
typedef unsigned long long ULL;
int n,m,i,j,l,z,k,x,y;
const int maxn = 1000+5;
using namespace std;
string s;
string ss[105];
int main() {
    cin>>s;
    cin>>n;
    fori cin>>ss[i];
    bool f=0;
    fori forj
    if(ss[i]==s||ss[i][1]==s[0]&&ss[j][0]==s[1]) f=1;
    if(f) puts("YES");
    else puts("NO");
}
