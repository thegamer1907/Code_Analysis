#include<bits/stdc++.h>

using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using dd = double;
using ldd = long double;
using si = short int;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

//debug defines
#ifdef HOME
    #define debug(x) cout << #x << " " << x << endl;
    #define debug_v(x) for (auto j : (x)){ cout << j << " ";} cout << endl;
    #define PO cout << "Pomelo" << endl;
    #define OL cout << "Oliva" << endl;
#else
    #define debug(x) 0
    #define debug_v(x) 0
    #define PO 0
    #define OL 0
#endif // HOME
//end of debug defines

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        q.push(i);
    }
    int x, y;
    cin >> x >> y;
    --x;
    --y;
    if (x > y)
    {
        swap(x, y);
    }
    for (int i = 1; q.size() > 2; i += (q.size() * 2 == n ? 1 : 0), n /= (q.size() * 2 == n ? 2 : 1))
    {
        int a = q.front();
        q.pop();
        int b = q.front();
        q.pop();
        if (a > b)
            swap(a, b);
        if (a == x && b == y)
        {
            cout << i;
            return 0;
        }
        if (a == x || a == y)
        {
            q.push(a);
        }
        else
        {
            q.push(b);
        }
    }
    cout << "Final!";
    return 0;
}
