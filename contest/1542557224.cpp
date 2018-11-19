#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a, s, n, k;
    cin >> n >> k;
    set <int> tm;
    for (int j = 0; j < n; j++) {
        s = 0;
        for (int i = 0; i < k; i++) {
            cin >> a;
            s += (a << i);
        }
        tm.insert(s);
    }
    for (set <int> ::iterator it = tm.begin(); it != tm.end(); it++) {
        for (set <int> ::iterator jt = it; jt != tm.end(); jt++) {
            bool cond = true;
            for (int i = 0; i < k && cond; i++) {
                cond = (((*it >> i) & 1) != ((*jt >> i) & 1) || !((*it >> i) & 1) || !((*jt >> i) & 1));
            }
            if (cond) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
