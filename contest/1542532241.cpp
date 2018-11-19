#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i < 5; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    v[0] = 5*v[0];
    v[3] = 5*v[3];
    v[4] = 5*v[4];
    int t1 = v[3];
    int t2 = v[4];
    sort(v.begin(), v.end());
    int idx1 = -1, idx2 = -1;
    for(int i = 0; i < 5; i++){
        if(v[i] == t1 && idx1 == -1)
            idx1 = i;
        if(v[i] == t2 && idx2 == -1)
            idx2 = i;
    }
    if(abs(idx1-idx2) == 1 || abs(idx1-idx2) == 4) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
