#include <iostream>
#include <set>
using namespace std;
const int maxn = 100010;

set<int> st;
int n, m, x, s[maxn], a[maxn];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i ++)
        cin >> a[i];
	for (int i = n-1; i >= 0; i --) {
        st.insert(a[i]);
        s[i] = st.size();
    }
	while (m--) {
        cin >> x;
        cout << s[--x] << endl;
    }
    return 0;
}
