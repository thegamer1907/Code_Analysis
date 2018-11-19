#include <bits/stdc++.h>

#define fr first
#define sc second
#define OK puts("OK");
#define pb push_back
#define mk make_pair

using namespace std;

typedef long long ll;

const int inf = (int)1e9 + 7;
const int N = (int)1e5 + 7;

string a,b;
int n,u[N],c[N];

int main () {
        cin >> a;
        cin >> n;

        for (int i = 1; i <= n; i ++) {
                cin >> b;
                u[b[0] - 'a'] = 1;
                c [b[1] - 'a'] = 1;
                if (a == b) {
                        cout << "YES" << endl;
                        return 0;
                }
        }
        if (c[a[0] - 'a'] == 1 && u[a[1] - 'a'] == 1)
                cout << "YES";
        else
                cout << "NO";
}
