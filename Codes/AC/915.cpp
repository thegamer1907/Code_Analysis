/**Bismillahir Rahmanir Rahim//fold  */
#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007
#define llinf 1000000000000000000LL
#define bug(args ...) { string s = #args; istringstream iss(s); cout<<__LINE__<<": ", err(iss, args), cout << '\n'; }
void err(istringstream &iss) {}
template<typename T, typename ... Args> void err(istringstream &iss, const T &varVal, const Args & ... args) {
    string varName; iss >> varName; if (varName.back()==',') varName.back() = ' ';
    cout << varName << " = " << varVal << "; ", err(iss, args ...);
}
typedef long long int ll; typedef unsigned long long int ull; typedef long double ld;
int n, m, T, Q, cn = 0, K;//end
#define MAXN 100005

char str[MAXN];

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

// range er upor binary search ==> 2 pointers, ok when len-maxCnt<=K
    scanf("%d%d", &n, &K);
    scanf("%s", str);
    int csa[MAXN], csb[MAXN];
    for (int i = 0; i < n; i++) {
        if (str[i]=='a') csa[i] = 1+(i ? csa[i-1] : 0), csb[i] = (i ? csb[i-1] : 0);
        else if (str[i]=='b') csb[i] = 1+(i ? csb[i-1] : 0), csa[i] = (i ? csa[i-1] : 0);
    }
    int mx = 1;
    for (int i = 0, i2 = 0; i<n && i2<n; ) {
        int os = min(csa[i2]-((i) ? csa[i-1] : 0), csb[i2]-((i) ? csb[i-1] : 0));
        if (os>K) {
            i++;
        } else {
            mx = max(mx, ++i2-i);
        }
    }
    printf("%d\n", mx);

    return 0;
}