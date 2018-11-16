#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i<n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> m;
    vector <int> w(m);
    for (int i = 0; i<m; ++i){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    int ans = 0;
    for (int i = 0, j = 0; i < n && j < m;){
        if (v[i] == w[j] || v[i] + 1 == w[j] || v[i] - 1 == w[j]){
            ans++;
            i++;
            j++;

        }

        else if (v[i] < w[j]){
            i++;
        }
        else if (v[i] > w[j] ){
            j++;
        }
    }
    cout << ans;
    return 0;
}
