#include <bits/stdc++.h>
using namespace std;

int n, k, t, a;
vector<int> q(4);
map<int, int> w;

int reorder(int z) {
    int x = 0;
    set< pair<int, int> > e;
    for(int i=0; i < k; i++)
        e.insert({q[i], i});
    for(int pos = 0; pos < k; pos++) {
        auto it = e.begin();
        x += (((z & (1 << pos)) > 0) << it->second);
        e.erase(it);
    }

    return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> k;

    for(int i=0; i < n; i++) {
        a = 0;
        for(int j=0; j < k; j++) {
            cin >> t;
            a += t << j;
            q[j] += t;
        }
        w[a]++;
    }
    while(n) {
        int ln = n;
        if(q[0] * 2 <= n &&
           q[1] * 2 <= n &&
           q[2] * 2 <= n &&
           q[3] * 2 <= n) {
            cout << "YES";
            return 0;
        }
        //cout << q[0] << ' ' << q[1] << ' ' << q[2] << endl;
        for(int i=0; i < (1 << k); i++) {
            int val = reorder(i ^ ((1 << k)-1));
            if(w[val] &&
               (((val & 1) == 0) || q[0] > 0) &&
               (((val & 2) == 0) || q[1] > 0) &&
               (((val & 4) == 0) || q[2] > 0) &&
               (((val & 8) == 0) || q[3] > 0)
            ) {
                n--;
                w[val]--;
                if(val & 1)
                    q[0]--;
                if(val & 2)
                    q[1]--;
                if(val & 4)
                    q[2]--;
                if(val & 8)
                    q[3]--;
                break;
            }
        }
        if(ln == n)
            break;
    }
    cout << "NO";
}
