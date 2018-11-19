#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int cnt[20];
int main(){
    int n, k, x;
    cin >> n >> k;
    bool can = false;
    for(int i = 1; i <= n; i++){
        bool flag = true;
        int v = 0;
        for(int j = 0; j < k; j++){
            scanf("%d", &x);
            v |= (x << j);
        }
        cnt[v]++;
        if(v == 0) return 0*puts("YES");
    }
    for(int i = 0; i < 16; i++){
        for(int j = i+1; j < 16; j++){
            if(cnt[i] && cnt[j]){
                bool flag = true;
                for(int t = 0; t < k; t++){
                    if((i&(1 << t)) && (j&(1 << t))){
                        flag = false; break;
                    }
                }
                if(flag) can = true;
            }
            if(can) return 0*puts("YES");
        }
    }
    puts("NO");
    return 0;
}