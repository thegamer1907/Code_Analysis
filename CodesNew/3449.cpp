#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;

    int mx  = 0;
    vector<int> a(n,0);

    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }

    int ans_mn = mx;
    int ans_mx = mx + m;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += mx - a[i];
    }

    if(m > sum){
        m -= sum;
        int up = m / n;
        ans_mn += up;
        m -= up * n;
        if(m > 0)
            ans_mn++;
    }

    cout << ans_mn << " " << ans_mx << endl;

    return 0;
}