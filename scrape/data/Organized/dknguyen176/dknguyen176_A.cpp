#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define mize(a, b) a = min(a, b)
using namespace std;

const int N = 2e5+5;
int n, x, y, p[N], Cnt,
    bit[N], updated[N], total;
map<int,vector<int> > List;
map<int,vector<int> >::reverse_iterator rit;
map<int,int> Num;
int64_t ans, m;

void update(int i)
{
    if (updated[i]) return;
    updated[i] = 1; total += 1;
    for(; i<=n; i+=(i&-i)) bit[i] += 1;
}
int get(int i)
{
    int res = 0;
    for(; i>0; i-=(i&-i)) res += bit[i];
    return res;
}
int main()
{
    //freopen("a.inp","r",stdin);
    scanf("%d",&n);
    for(int i=1; i<=n; ++i) {
        scanf("%d%d",&x,&y);
        List[y].push_back(x);
        Num[x] = 0;
    }
    for(auto & a: Num) a.second = ++Cnt;

    for(rit = List.rbegin(); rit != List.rend(); ++rit) {
        vector<int> line (rit -> second);
        sort(begin(line), end(line));
        m = line.size();
        for(int i=0; i<m; ++i) {
            x = line[i];
            update(Num[x]);
            p[i] = get(Num[x]);
        }
        p[m] = total + 1;
        for(int i=0; i<m; ++i) ans += 1LL * (p[i+1]-p[i]) * p[i];
    }
    cout << ans;
}