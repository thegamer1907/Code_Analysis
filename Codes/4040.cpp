#include <bits/stdc++.h>

using namespace std;

int n, m, d[100005];
vector< vector<int> > v, r;

int main()
{
    //ifstream cin ("data.in");
    cin >> n >> m;
    for (int j = 0; j < 100005; ++j)
        d[j] = 2000000000;
    for (int i = 0; i < n; ++i){
        v.push_back({});
        r.push_back({});
        for (int j = 0; j < m; ++j){
            int x;
            cin >> x;
            v.back().push_back(x);
            if(i == 0)
                r.back().push_back(-1);
            else{
                if(x >= v[i-1][j])
                    r.back().push_back(r[i-1][j]);
                else r.back().push_back(i-1);
            }
            d[i] = min(d[i], r[i][j]);
        }
    }
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        --x;--y;
        if(d[y] < x)
            cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
