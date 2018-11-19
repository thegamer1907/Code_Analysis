#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef unsigned int ui;

int main()
{
    int h, m, s, t1, t2; cin >> h >> m >>s>> t1 >>t2;

    h %= 12;

    double ss = (s/60.0);
    double mm = (m/60.0) + (s/60.0)/60.0;
    double hh = (h/12.0) + mm/12.0;

    vector<pair<double, int>> v;

    v.push_back({hh, 0});
    v.push_back({mm, 0});
    v.push_back({ss, 0});
    v.push_back({t2/12.0, 1});
    v.push_back({t1/12.0, 1});

    sort(v.begin(), v.end());

    for(int i=0; i<5; i++)
    {
        if((v[i].second && v[(i+1)%5].second)) { cout << "YES\n"; return 0; }
    }

    cout << "NO\n";


    return 0;
}
