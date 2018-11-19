#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int n, k;

bool cross(vector<int> & a, vector<int>&b){
    vector<int> r(a.size());
    for (int i = 0; i < a.size(); ++i) {
        r[i] = min(a[i], b[i]);
    }
    for (int j = 0; j < r.size(); ++j) {
        if(r[j] == 1){
            return false;
        }
    }
    return true;
}

void sol(){
//    freopen("io.txt", "a+", stdout);
//    freopen("io.txt", "r", stdin);
//    printf("\nsol---%s\n", __TIMESTAMP__);

    scanf("%d%d", &n, &k);
    vector<vector<int>> in(n, vector<int>(k));
    set<vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        vector<int> key;
        vector<int> rev_key;
        for (int j = 0; j < k; ++j) {
            int a;
            cin >> a;
            key.push_back(a);
        }
        mp.insert(key);
    }
    int bal = mp.count({0, 0, 0,0});
    for(auto i : mp){
        for(auto j : mp){
            if(cross(i, j)){
                cout << "yes";
                return;
            }
        }
    }
    if(bal > 0)
        cout << "YES";
    else
        cout << "NO";
}
int main(){
    sol();
}


