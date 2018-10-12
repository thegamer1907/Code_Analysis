#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int mx = -1;
    int mn = -1;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        mx = max(x, mx);
    }
    mx = mx + k;
    if (n == 1){
        mn = mx;
    }
    else{
        while(k > 0){
            sort(v.begin(), v.end());
            if (v[0] < v[1]){
                int temp = v[1] - v[0];
                if (temp <= k){
                    v[0] += temp;
                    k -= temp;
                }
                else{
                    v[0] += k;
                    k -= k;
                }
            }
            else if (v[0] == v[1]){
                v[0]++;
                k--;
            }
        }
        for (int i = 0 ; i < n ; i++){
            mn = max(mn, v[i]);
        }
    }
    cout << mn << " " << mx << endl;
    return 0;
}
