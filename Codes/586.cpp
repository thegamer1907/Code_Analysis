#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll

int sum(int x){
    int res = 0;
    while (x) res += x % 10, x /= 10;
    return res;
}

int32_t main(){
    ios::sync_with_stdio(false);
    vector<int> arr;
    for (int i = 0; arr.size() < 10000; ++i) if (sum(i) == 10) arr.push_back(i);
    int k; cin >> k;
    cout << arr[k - 1] << endl;
    return 0;
}
