#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define f first
#define s second
const int D = 10;

int csts[D];

int main() {
    int v ;
    string ans ;
    pii mc(1e9, 0);
    scanf("%d", &v);
    csts[0] = 1e9;
    for(int i=1; i<D; i++) {
        scanf("%d", &csts[i]);
        mc = min(mc, {csts[i], i});
    }
    if(mc.f > v) {
        printf("-1\n");
        return 0;
    }
    while(true) {
        pii np(0, 0);
        for(int i=1; i<D; i++) {
            if(v >= csts[i])
                np = max(np, {(v - csts[i]) / mc.f, i});
        }
        if(np.f == 0) {
            np = {1, csts[1]};
            for(int i=2; i<D; i++)
                if(csts[i] <= v)
                    np = max(np, {i, csts[i]});
            ans += char(np.f + '0') ;
            break;
        }
        // printf("v = %d, Picked %d %d \n", v, np.f, np.s);
        ans += char(np.s + '0') ;
        v -= csts[np.s];
    }

    printf("%s\n", ans.c_str());
}
