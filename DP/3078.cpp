#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k;
    int N;
    cin >> N;
    vector<int> S(N), C(N);
    for(i=0; i<N; i++) cin >> S[i];
    for(i=0; i<N; i++) cin >> C[i];
    const int INF = 1e9;
    int ans = INF;
    for(i=1; i<N-1; i++){
        int c1 = INF, c2 = INF;
        for(j=0; j<i; j++){
            if(S[j] < S[i]) c1 = min(c1, C[j]);
        }
        for(j=i+1; j<N; j++){
            if(S[i] < S[j]) c2 = min(c2, C[j]);
        }
        ans = min(ans, C[i]+c1+c2);
    }
    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}