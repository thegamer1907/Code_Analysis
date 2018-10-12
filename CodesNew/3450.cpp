#include <bits/stdc++.h>
#define N 15000010
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin>>n>>m;

    vector<int>a(n);
    int sum = 0;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    cout<< max( mx, (sum + m + n - 1)/n )<<" "<< mx + m;

    return 0;
}