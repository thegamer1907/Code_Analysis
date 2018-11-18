#include <bits/stdc++.h>

#define ll  long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF (long long) 1e30
#define pii pair<ll ,ll >
using namespace std;

int a[20];

int main() {
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
//    fast;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int now = 0;
        for (int j = 0; j < k; j++) {
            int w;
            cin >> w;
            now += (w) * (1 << j);
        }
        a[now] = 1;
    }
    for (int i = 0; i < (1 << k); i++) {
        for (int j = 0; j < (1 << k);j++) {
            if (!(i & j) && a[i] && a[j]) {
                cout << "YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO";
}

