#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    int ans=0;
    cin >> n >> k;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int j = 0; j < n; ++j) {
        if(v[k-1]<=v[j] && v[j]>0){
            ans++;
        }
    }
    cout << ans;
}
