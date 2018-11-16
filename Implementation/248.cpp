#include <bits/stdc++.h>

#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

using namespace std;

typedef long long ll;
const int MAXN = 1123456;
const int MAXINT = 2147383648;
const ll MAXLL = 9223372035854775808LL;

vector <int> v;
vector <int> v1;

int main()
{
    fast_io;

    int n, a, b, now = 1;

    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i) v.push_back(i);
    while(v.size() > 1) {
        v1.clear();
        for (int i = 0; i < v.size(); i += 2) {
            if ((v[i] == a && v[i + 1] == b) || (v[i + 1] == a && v[i] == b)) {
                if (v.size() == 2) {cout << "Final!" << endl;}
                else cout << now << endl;
                return 0;
            }
            if (v[i] == a || v[i] == b) v1.push_back(v[i]);
            else v1.push_back(v[i + 1]);

        }
        v = v1;
        ++now;
    }


    return 0;
}
