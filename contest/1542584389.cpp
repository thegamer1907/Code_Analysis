#include <bits/stdc++.h>

using namespace std;

vector <double> a;

int main()
{
    #ifdef HOME
        freopen("input.txt", "rt", stdin);
    #endif // HOME
    int h, s, m, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    a.push_back(h + ((1.0 * m) / 60) + ((1.0 * s) / 3600));
    a.push_back(((m + (1.0 * s) / 60) * 1.0) / 5);
    a.push_back((s * 1.0) / 5);
    int tt1 = min(t1 % 12, t2 % 12);
    int tt2 = max(t1 % 12, t2 % 12);
    t1 = tt1;
    t2 = tt2;
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] >= 12.0)
            a[i] -= 12.0;
    }
    for (int i = 0; i < a.size(); i++){
        if (t1 < a[i] && a[i] < t2)
            cnt++;
    }
    for (int i = 0; i < a.size(); i++){
        if (a[i] > t2 || a[i] < t1)
            cnt2++;
    }
    if (cnt == 3 || cnt2 == 3)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
