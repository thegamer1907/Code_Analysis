#include <bits/stdc++.h>
using namespace std;

//TYPEDEFS
typedef long long ll;
typedef pair<double, double> Point;

//MACROS
#define set(a, b) memset(a, b, sizeof(a))
#define sort_vec(a) sort(a.begin(), a.end())
#define sort_arr(a, n) sort(a, a + n)

/*

*/

int main() {
    int n, m;
    cin >> n >> m;
    string P[n], E[m];
    for(int i = 0; i < n; i++) {
        cin >> P[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> E[i];
    }
    int int_cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(P[i] == E[j]) int_cnt++;
        }
    }
    cout << (n + (int_cnt % 2) > m ? "YES" : "NO") << endl;
    return 0;
}
