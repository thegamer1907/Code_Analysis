#include<bits/stdc++.h>
using namespace std;

#define int long long
int d[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

signed main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int kol = 0;
    for (int i = 1; i <= 8; i++)
        if (n == d[i])
            kol = i;
    //cout << kol << " ";


    vector<vector<int> > v(10);
    for (int i = 1; i <= n; i++)
        v[1].push_back(i);
    vector<int> v1;
    for (int j = 1; j <= kol; j++) {
        int s = v[j].size();
        int tec = s / 2;
        for (int i = 0; i < tec; i++) {
            if ((v[j][2 * i] == a && v[j][2 * i + 1] == b) || (v[j][2 * i + 1] == a && v[j][2 * i] == b)) {
                if (j == kol)
                    cout << "Final!";
                else
                    cout << j;
                return 0;
            }
            else if (v[j][2 * i] == a || v[j][2 * i + 1] == a)
                v[j + 1].push_back(a);
            else if (v[j][2 * i] == b || v[j][2 * i + 1] == b)
                v[j + 1].push_back(b);
            else
                v[j + 1].push_back(v[j][2 * i]);
        }
        //v = v1;
    }


    return 0;
}
