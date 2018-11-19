#include<bits/stdc++.h>
using namespace std;
int vis[27];
int main() {
    int n,k,t;
    scanf("%d%d", &n, &k);
    while(n--) {
        int tmp = 0;
        for(int i=0 ; i<k ; i++){
            scanf("%d", &t);
            tmp |= (t<<i);
        }
        vis[tmp]++;
    }
    for(int i=0 ; i<16 ; i++) {
        for(int j=0 ; j<16 ; j++) {
            if((i&j) == 0 && vis[i] && vis[j]){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}