#include <iostream>

using namespace std;

int n, m, vis[100001], a[100001], d[100001];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n-1; i >= 0; i--) {
        if(!vis[a[i]]) {
            vis[a[i]] = true;
            d[i] = d[i+1] + 1;
        }
        else {
            d[i] = d[i+1];
        }
    }
    for(int i = 0; i < m; i++) {
        int b; cin >> b;
        cout << d[b-1] << endl;
    }
}