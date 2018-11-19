#include<bits/stdc++.h>
using namespace std;
int vis[100];
int flag = 0;
vector <int>mp;
void dfs(int pos, int s) {
    if(pos == mp.size())return;

    if(vis[s])flag = 1;
    dfs(pos + 1, s);

    int s1 = s | (1 << mp[pos]);
    if(vis[s1])flag = 1;
    dfs(pos + 1, s1);

}
int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int tmp = 0;
        for(int j = 0; j < k; j++) {
            int v;
            cin >> v;
            tmp <<= 1;
            tmp += v;
        }
        vis[tmp] = 1;
    }

    for(int i = 0; i < (1 << k); i++) {
        if(vis[i]) {
            //printf("s---%d\n", i);
            mp.clear();
            for(int j = 0; j < k; j++) {
                if(((i >> j) & 1) == 0)mp.push_back(j);
            }
            //printf("%d\n", mp.size());
            dfs(0, 0);
        }
    }
    if(flag)printf("YES\n");
    else printf("NO\n");
    return 0;
}
