#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
int main()
{
        string p;
        cin >> p;
        int n;
        cin >> n;
        vector<string> v;
        for(int i = 0; i < n; i++) {
                string s;
                cin >> s;
                v.pb(s);
                if(p == s) {
                        cout << "YES";
                        return 0;
                }
        }
        for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                        if(v[i][1] == p[0] && v[j][0] == p[1]) {
                                cout << "YES";
                                return 0;
                        }
                }
        }
        cout << "NO";
        return 0;
}
