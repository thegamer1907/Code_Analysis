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
    if (e % 2) return (bin_pow(x, e - 1) % MOD) * (x % MOD);
    else {
        k = bin_pow(x, e / 2) % MOD;
        return k * k;
    }
}*/

int n;
int t1, t2, t3, t4, t5, t6;
int a, b, c, d;
int k;
int m[112345][10];
int t[10];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        c = 0;
        for(int j = 1; j <= k; j++) {
            cin >> m[i][j];
            c += m[i][j];
            t[j] += m[i][j];
        }
        if(c == 0) {
            cout << "YES";
            return 0;
        }
        if(c == 1) d++;
        if(c == 2) b++;
        if(k == 4) {
            if(!t1 && m[i][1] == 0 && m[i][2] == 0 && m[i][3] == 1 && m[i][4] == 1) t1++;
            if(!t2 && m[i][1] == 0 && m[i][2] == 1 && m[i][3] == 0 && m[i][4] == 1) t2++;
            if(!t3 && m[i][1] == 0 && m[i][2] == 1 && m[i][3] == 1 && m[i][4] == 0) t3++;
            if(!t4 && m[i][1] == 1 && m[i][2] == 0 && m[i][3] == 0 && m[i][4] == 1) t4++;
            if(!t5 && m[i][1] == 1 && m[i][2] == 0 && m[i][3] == 1 && m[i][4] == 0) t5++;
            if(!t6 && m[i][1] == 1 && m[i][2] == 1 && m[i][3] == 0 && m[i][4] == 0) t6++;
        }
    }
    for(int i = 1; i <= k; i++) {
        if(t[i] == n) {
            cout << "NO";
            return 0;
        }
    }
    if(d > 0) {
        cout << "YES";
        return 0;
    }\
    if(k == 2) {
        cout << "YES";
        return 0;
    }
    if(t1 && t6 || t2 && t5 || t3 && t4) cout << "YES";
    else cout << "NO";
    return 0;
}
