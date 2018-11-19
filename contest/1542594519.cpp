//#ezcode

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define F first
#define S second
#define PB push_back
#define MP make_pair

/*long long bin_pow(long long x, long long e) {
    long long k;
    if (e == 0) return 1;
    if (e % 2) return bin_pow(x, e - 1) * x;
    else {
        k = bin_pow(x, e / 2);
        return k * k;
    }
}*/

int n;
string s;
string ans;
int test1, test2;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> ans >> n;
    for(int i = 1; i <= n; i++) {
        cin >> s;
        if(s == ans) {
            cout << "YES";
            return 0;
        }
        if(s[1] == ans[0]) test2++;
        if(s[0] == ans[1]) test1++;
    }
    if(test1 > 0 && test2 > 0) cout << "YES";
    else cout << "NO";
    return 0;
}
