#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define inf 0x7FFFFFFF
typedef long long ll;
typedef pair<int, int> P;
const int maxn = 1e5 + 5;
const ll INF = 1e18;

int main()
{
    int n, k;
    bool appear[20];
    memset(appear, false, sizeof(appear));
    cin >> n >> k;
    for(int i=0; i<n; i++) {
        int m = 0;
        for(int j=0; j<k; j++) {
            int x;
            scanf("%d", &x);
            m = (m<<1) + x;
        }
        appear[m] = true;
    }
    for(int i=0; i<(1<<k); i++) {
        for(int j=0; j<(1<<k); j++) {
            // printf("%d %d %d %d %d\n", i, j, i&j==0, appear[i], appear[j]);
            if((i&j)==0 && appear[i] && appear[j]) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
