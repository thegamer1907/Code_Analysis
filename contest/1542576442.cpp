#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1e5 + 5;
bool vis[1 << 4];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int el;
    bool flg = 0;
    if(n == 1) {
        for(int i = 0; i < k; i++) {
            scanf("%d", &el);
            if(el & 1) {
                puts("NO");
                return 0;
            }
        }
        puts("YES");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        int no = 0;
        int anotherNO = 0;
        for(int j = 0; j < k; j++) {
            scanf("%d", &el);
            no += (el & 1) << j;
            anotherNO += (!(el & 1)) << j;
        }
        for(int j = 0; j < 1 << 4; j++) {
            if(!(j & no)) {
                if(vis[j]) {
                    flg = 1;
                }
            }
        }
        vis[no] = 1;
    }
    if(flg) {
        puts("YES");
    }else {
        puts("NO");
    }
}
