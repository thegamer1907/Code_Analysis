#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <vector>
#include <cstring>
#include <complex>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int INF = 0x3f3f3f3f;
const int mod = 1500000001;
const int maxn =1e5+7;
const double pi = acos(-1.0);
const int v2 = (mod+1)/2;
const double eps = 1e-7;
int n,c[maxn],ans;
vector<int> s[maxn];

void dfs(int now,int fa,int col)
{
    if(c[now]!=col) ans++,col = c[now];
    if(now!=1&&s[now].size()==1)
        return;
    for(int i = 0;i < s[now].size();i++)
    {
        int to = s[now][i];
        if(fa!=to)
            dfs(to,now,col);
    }
}

int main()
{
    scanf("%d",&n);
    for(int i = 2;i <= n;i++)
    {
        int a;
        scanf("%d",&a);
        s[i].push_back(a);
        s[a].push_back(i);
    }
    for(int i = 1;i <= n;i++)
        scanf("%d",&c[i]);
    ans = 0;
    dfs(1,-1,-1);
    printf("%d\n",ans);
    return 0;
}
