#include <bits/stdc++.h>
using namespace std;

const int N = 40000;
vector<int> g[N];
int portal[N];

int main (){

    int n, t;
    int pos = 1;

    cin >> n >> t;

    for (int i = 1; i<n; i++){
        cin >> portal[i];
        g[i].push_back(i+portal[i]);
    }
    while (pos < n){
        //cout << pos << " before" << endl;
        pos = g[pos][0];
        //cout << pos << " after" << endl;
        if (pos == t){
            break;
        }
    }

    if (pos == t){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

return 0;
}
