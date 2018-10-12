#include <iostream>
#include <set>

using namespace std;

long long a[200000 + 10], k[200000 + 10];
set < pair <long long, long long> > st;

int main() {
    int n, q;
    cin >> n >> q;

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        st.insert({sum, i + 1});
    }

    for (int i = 0; i < q; i++) {
        cin >> k[i];
    }

    long long ost = 0;
    int u = 0;

    set < pair <long long, long long> > :: iterator it;
    int ex;
    for (int i = 0; i < q; i++) {
        long long to = k[i] + ost;
        it = st.lower_bound({to, -1});

        if (it == st.end()) {
            u = 0;
            ost = 0;
        } else if ((*it).first == to){
            u = (*it).second;
            ost = to;
            if (u == n) {
                u = 0;
                ost = 0;
            }
        } else {
            u = (*it).second - 1;
            ost = to;
        }

        cout << n - u << '\n';
    }

    return 0;
}
