#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <map>
#include <set>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<vi> vii;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    int ptr = n;
    while (ptr > 1)
    {
        ++cnt;
        ptr /= 2;
    }
    if (a > b)
    {
        swap(a, b);
    }
    ptr = n;
    int ans = 1;
    while ((a + 1) / 2 != (b + 1) / 2)
    {
        b = (b + 1) / 2;
        a = (a + 1) / 2;
        ++ans;
    }
    if (ans == cnt)
    {
        cout << "Final!";
        return 0;
    }
    cout << ans;
    return 0;
}