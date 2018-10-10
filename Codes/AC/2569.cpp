#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi criba(1e7+5);
    for (int i = 2; i < 1e7+5; ++i) {
        if (criba[i]) continue;
        criba[i] = i;
        int ind = 2;
        while (ind*i < 1e7+5) {
            criba[ind*i] = i;
            ind++;
        }
    }
    vi CNT(1e7 + 2);
    for (int i = 0; i < n; ++i) {
        int aux;
        cin >> aux;
        unordered_map<int, int> M;
        while (aux != 0 && aux != 1) {
            if (!M[criba[aux]]) CNT[criba[aux]]++;
            M[criba[aux]] = 1;
            aux /= criba[aux];
        }
    }
    for (int i = 2; i < 1e7+2; ++i) {
        CNT[i] += CNT[i-1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        b = min(b, 10000000);
        a = min(a, 10000000);
        cout << CNT[b] - CNT[a-1] << "\n";
    }
    return 0;
}