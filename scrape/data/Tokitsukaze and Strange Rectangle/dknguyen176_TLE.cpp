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
int n, x, y, total, p[N];
map<int,vector<int> > List;
map<int,vector<int> >::reverse_iterator rit;
set<int> Set;
int64_t ans, m;

int main()
{
    //freopen("a.inp","r",stdin);
    scanf("%d",&n);
    for(int i=1; i<=n; ++i) {
        scanf("%d%d",&x,&y);
        List[y].push_back(x);
    }
    for(rit = List.rbegin(); rit != List.rend(); ++rit) {
        vector<int> line (rit -> second);
        sort(begin(line), end(line));
        m = line.size();
        for(int i=0; i<m; ++i) {
            x = line[i]; Set.insert(x);
            p[i] = distance(Set.begin(), Set.find(x)) + 1;
        }
        p[m] = Set.size() + 1;
        for(int i=0; i<m; ++i) {
            ans += 1LL * (p[i+1]-p[i]) * p[i];
        }
    }
    cout << ans;
}