#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

#define MAXN 500001
#define MOD 1000000007

int N;
char S[MAXN*3];
int pos[MAXN];
int cur;

int main(int argc, char** argv) {
#ifdef OJ	
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> S+cur;

        pos[i] = cur;
        cur += strlen(S+cur)+1;
    }

    for (int i = N-1; i > 0; i--) {
        char *c1 = S+pos[i-1];
        char *c2 = S+pos[i];

        while(*c1 && *c2 && *c1 == *c2) {
            c1++; c2++;
        }

        if (*c1 && *c1 > *c2) *c1 = 0;
    }

    for (int i = 0; i < N; i++)
        cout << S + pos[i] << endl;

    return 0;
} 
