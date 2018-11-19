#include <bits/stdc++.h>
#define LL long long
using namespace std;

const int maxn = 1e5 + 10;
int n, m, a[maxn][4];
bool vis[1 << 4];
vector<int> v;
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) {
        int sum = 0;
        v.clear();
        for(int j = 0; j < m; j++)
            sum += a[i][j] << j;
        if(sum == 0)
            return !printf("YES");
        for(int j = 0; j < m; j++)
            if(!a[i][j])
                v.push_back(j);

        for(int k = 0; k < 1 << v.size(); k++) {
            int t = 0;
            for(int j = 0; j < v.size(); j ++) {
                if(k & (1 << j))
                    t += 1 << v[j];
            }
            if(vis[t])
                return !printf("YES");
        }
        vis[sum] = true;
    }
    return !printf("NO");
}
