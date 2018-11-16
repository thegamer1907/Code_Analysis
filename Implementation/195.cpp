#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    vector<int> old(n, 0);
    old[a - 1] = 1;
    old[b - 1] = 2;
    for(int i = 1; old.size() > 2; i++) {
        vector<int> nw;
        for(int j = 0; j < old.size(); j+= 2) {
            if(old[j] == 1 && old[j + 1] == 2 || old[j + 1] == 1 && old[j] == 2 ) {
                cout << i;
                return 0;
            }
            if(old[j] == 1 || old[j + 1] == 1) {
                nw.push_back(1);
            }
            else if(old[j] == 2 || old[j + 1] == 2) {
                nw.push_back(2);
            } else {
                nw.push_back(0);
            }
        }
        swap(nw, old);
    }
    cout << "Final!";
    return 0;
}
