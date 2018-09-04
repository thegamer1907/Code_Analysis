#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int digit(int x) {
    int xx = 0;
    while(x > 0)
        xx += (x%10), x /= 10;
    return xx;
}

int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.precision(17);
    vector<int> ans;
    for(int i = 0;i < 2*1e7;i++)
        if(digit(i) == 10)
            ans.push_back(i);
    int k;
    cin >> k;
    cout << ans[k-1];
    return 0;
}
