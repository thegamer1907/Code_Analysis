#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+1;

int a[N];
int main(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; ++ i)
        cin >> a[i];
    int mx = *max_element(a, a+n)+m;
    for (int i = 0; i < m; ++ i)
        ++ *min_element(a, a+n);
    int mn = *max_element(a, a+n);
    cout << mn << " " << mx << endl;
}
