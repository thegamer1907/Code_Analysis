// IN THE NAME OF GOD

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define PB push_back
#define PP pop_back
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define I insert
#define E erase
#define B back

const int MAXN = 1e5 + 100;
const int N = 1e6 + 100;
const ll INF = 1e18;
const ll mod = 1e9 + 9;
const ll hashh = 311;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; true; i++)
    {
        int x = i;
        int check = 0;
        while (x)
        {
            check += x % 10;
            x /= 10;
        }
        if (check == 10)
            cnt++;
        if (cnt == n)
        {
            cout << i;
            return 0;
        }
    }
}
