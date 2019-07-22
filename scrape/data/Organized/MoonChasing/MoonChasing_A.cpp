#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
#define MAXN 100010
#define INF 0x3f3f3f3f
#define DEBUG
#define DataIn
typedef long long LL;

using namespace std;

LL n, m, k;
LL dis[MAXN];

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> m >> k;
    for(int i=0; i<m; i++)
        cin >> dis[i];
    sort(dis, dis+m);

    int cnt = 0;
    LL curPage = 1;
    LL hasDis = 0;
    int num;
    LL maxx=-1;
    while(1)
    {
        maxx = curPage * k + hasDis;
        if(maxx < dis[hasDis])
        {
            if((dis[hasDis] - hasDis)%k == 0)
                curPage = (dis[hasDis] - hasDis)/k;
            else
                curPage = (dis[hasDis] - hasDis)/k+1;
            continue;
        }

        num = lower_bound(dis+hasDis, dis+m, maxx) - (dis+hasDis);
        if(dis[hasDis+num] == maxx)
            num++;

        if(m-hasDis < num)
            num = m-hasDis;

        hasDis += num;
        cnt ++;

        if(hasDis >= m)
            break;
    }
    cout << cnt;
}