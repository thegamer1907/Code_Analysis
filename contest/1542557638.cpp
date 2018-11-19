#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t1,t2,h,m,s;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h -= 12;
    vector<int> v(60,0);
    v[h*5] = 1;
    v[m] = 1;
    v[s] = 1;
    t1 *= 5; t2 *= 5;
    if (t1 > t2) swap(t1,t2);
    bool no_1 = false;
    for (int i = t1; i < t2; ++i) {
        if (v[i]) {
            //cout << ' ' << i << endl;
            no_1 = true;
            break;
        }
    }
    //cout << no_1 << endl;
    bool no_2 = false;
    for (int i = 0; i < t1; ++i) {
        if (v[i]) {
            //cout << ' ' << i << endl;
            no_2 = true;
            break;
        }
    }
    //cout << no_2 << endl;
    for (int i = t2; i < v.size(); ++i) {
        if (v[i]) {
            //cout << ' ' << i << endl;
            no_2 = true;
            break;
        }
    }
    //cout << no_2 << endl;
    if (no_1 && no_2) cout << "NO";
    else cout << "YES";
    return 0;
}
