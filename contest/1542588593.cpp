#include <bits/stdc++.h>
using namespace std;

inline int clean(int x){
    return ((x % 12) + 12) % 12;
}

inline int func(int start, int end, int mid){
    return clean(mid - start) < clean(end - start);
}

int main(){
    ios::sync_with_stdio(false);
    int h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2; m /= 5, s /= 5;
    vector<int> arr = { func(t1, t2, h), func(t1, t2, m), func(t1, t2, s) };
    sort(arr.begin(), arr.end());
    cout << (arr.front() == arr.back() ? "YES" : "NO") << endl;
    return 0;
}
