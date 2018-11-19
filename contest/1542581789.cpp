#include <bits/stdc++.h>

using namespace std;
bool cnt[16];
int n,m;
int main()
{
    memset(cnt,false,sizeof cnt);
    scanf("%d%d",&n,&m);
    for (int i=0;i<n;++i){
        int tmp = 0;
        for (int j=0;j<m;++j){
            int x;
            scanf("%d",&x);
            if (x){
                tmp|=(1<<j);
            }
        }
        cnt[tmp]=true;
    }
    bool f = false;
    for (int i=0;i<(1<<m);++i){
        for (int j=0;j<(1<<m);++j){
            if (cnt[i]&&cnt[j]&&((i+j)==(i^j)))
                f = true;
        }
    }
    if (f)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
