/*

    <AUTHOR>  Linzij_Xak1           </AUTHOR>
    <DATE>    04.03.2018            </DATE>
    <CONTEST> Techocup 2018 - final </CONTEST>
*/

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define per(i, a, b) for(int i = a; i <= b; ++i)
#define rep(i, a, b) for(int i = a; i >= b; --i)
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef pair< int, int > pii;
typedef pair<ll, ll> pll;

const int N = (int)1e5 + 200;
const int inf = (int)1e9;
const ll INF = (ll)1e18;
const double eps = 1e-8;

int n, a, b, cnt;

set < int > s;

bool inpair(int a, int b) {
    return (a / 2 + a % 2) == (b / 2 + b % 2);
}

int main() {
    cin >> n >> a >> b;
    int m =  n;
    int cnt = 1;
    while (!inpair(a, b)) {
        n /= 2;
        a = (a / 2) + a % 2;
        b = (b / 2) + b % 2;
        cnt++;
    }
    if (cnt == log2(m))
        cout << "Final!";
    else
        cout << cnt;
    return 0;
}