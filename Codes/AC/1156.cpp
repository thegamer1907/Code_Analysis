#include <bits/stdc++.h>
using namespace std;

int N, M, X;
string S;
map <string, int> MP;

int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++) {
        cin >> S;
        MP[S]++;
    }

    for(int i=0;i<M;i++) {
        cin >> S;
        MP[S]++;
    }

    for(auto p : MP) if(p.second == 2)
        N--, M--, X++;

    N += (X + 1) / 2, M += X / 2;

    cout << (N > M ? "YES" : "NO") << endl;
}