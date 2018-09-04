#include <bits/stdc++.h>
using namespace std;
const int limN = 1e5 + 5;

int N, K;
char str[limN];
int mco[limN];

int calca(char c) {
    for(int i=0; i<N; i++)
        mco[i] = str[i]==c? 0 : 1;
    int ans = 0;
    for(int i=0, j=0, s=0; j<N; j++) {
        s += mco[j];
        while(i < j && s > K)
            s -= mco[i++];
        if(s <= K)
            ans = max(ans, j-i+1);
    }
    return ans ;
}

int main() {
    int ans = 0;
    
    scanf("%d%d", &N, &K);
    scanf("%s", str);

    for(int i='a'; i<='b'; i++)
        ans = max(ans, calca(i));

    printf("%d\n", ans);
}
