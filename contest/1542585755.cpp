    #include <bits/stdc++.h>
     
    using namespace std;
     
    const int N = 2000;
   
int g[100];

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

    //  1
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            int cur = 0;
            for (int j = 0; j < k; ++j) {
                int a;
                cin >> a;
                a = 1 - a;
                cur |= (a << j);
            }
            if (cur == (1 << k) - 1) {
                cout << "YES";
                return 0;
            }
            for (int j = 0; j < (1 << k); ++j) {
                if(!g[j]) continue;
                if((j | cur) == (1 << k) - 1) {
                    cout << "YES";
                    return 0;
                }
            }
            g[cur] = 1;
        }
        cout << "NO";
        return 0;
    }