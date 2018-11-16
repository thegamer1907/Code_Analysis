#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <cmath>
#include <cctype>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inff = 0x3f3f3f3f3f3f3f3f;
#define FOR(i,a,b) for(int i(a);i<=(b);++i)
#define FOL(i,a,b) for(int i(a);i>=(b);--i)
#define REW(a,b) memset(a,b,sizeof(a))
#define inf int(0x3f3f3f3f)
#define si(a) scanf("%d",&a)
#define sl(a) scanf("%I64d",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define mod int(1e9+7)
#define pb push_back
#define lc (d<<1)
#define Pll pair<ll,ll>
#define P pair<int,int>
#define pi acos(-1)
int n,a[10008],s=1;
vector<int>g[10008];
void bfs()
{
    queue<int>q;
    q.push(1);
    while(q.size())
    {
        int x=q.front();q.pop();
        for(int i=0;i<g[x].size();i++)
        {
            if(a[g[x][i]]!=a[x]) s++;
            q.push(g[x][i]);
        }
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int x;
    FOR(i,2,n)
    {
        si(x);
        g[x].pb(i);
    }
    FOR(i,1,n)  si(a[i]);
    bfs();
    cout<<s<<endl;
    return 0;
}
