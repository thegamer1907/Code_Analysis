#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const int N = 1e5 + 1;
const int INF = 1e18;
const int MOD = 1e9 + 7;
const int PI = acos(-1.0);

int n;
string s, st;
bool b = 0, b1 = 0, b2 = 0;

int main() {
    cin >> s >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> st;
        if(st == s)
            b2 = 1;
        if(st[0] == s[1])
            b = 1;
        if(st[1] == s[0])
            b1 = 1;
    }
    if(b2 || (b && b1))
        cout << "YES";
    else
        cout << "NO";
return 0;
}
