#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long int ll;
typedef vector< pair<int, int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int, int> pii;

const ll INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int nax = 1000000 + 10;

int h, m, s, t1, t2;
int f1 = 1, f2 = 1;

void update(int x)
{
    if(x >= t1 && x < t2)
        f1 = 0;
    else
        f2 = 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12) h = 0;
    if(t1 > t2)
        swap(t1, t2);
    update(h);
    update(m / 5);
    update(s / 5);
    if(f1 || f2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
