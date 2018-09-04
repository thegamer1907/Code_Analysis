#include <bits/stdc++.h>

using namespace std;
typedef long long LL; 

#define MAXN 100002
#define MOD 1000000007

int N, K;
char S[MAXN];
int A[MAXN], B[MAXN];

int main(int argc, char** argv) {
#ifdef OJ	
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);
    
    cin >> N >> K;
    cin >> S+1;

    for (int i = 1; i <= N; i++) {
        A[i] = A[i-1];
        B[i] = B[i-1];

        if (S[i] == 'a') A[i]++;
        else B[i]++;
    }

    int r = 1;
    while(r <= N && A[r] <= K) r++;
    int ans = r-1;

    for (int i = 2; i <= N; i++) {
        r = max(r,i);
        while(r <= N && A[r] - A[i-1] <= K) r++;
        ans = max(ans, r-i);
    }

    r = 1;
    while(r <= N && B[r] <= K) r++;
    ans = max(ans, r-1);
    for (int i = 2; i <= N; i++) {
        r = max(r,i);
        while(r <= N && B[r] - B[i-1] <= K) r++;
        ans = max(ans, r-i);
    }

    cout << ans << endl;

    return 0;
} 
