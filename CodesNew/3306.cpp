 /* The man with 0 self-confident :( */
/*      waiting for end of life     */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <math.h>

using namespace std;

typedef long long int ll;
typedef map<ll, ll>::iterator MAPIT;
bool DESC(ll a, ll b)
{
    return (a > b);
}

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll bmm(ll a, ll b)
{
    return (a % b == 0) ? b : bmm (b, a % b);
}
ll roof(double a, double b)
{
    if (floor(a / b) == a / b)
        return a / b;
    return floor(a / b) + 1;
}

///Values

///EOF

int main()
{
    std::cin.sync_with_stdio(false);
    std::cin.tie(nullptr);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ///Start

    ll n = 0, m = 0, maximum = 0, i = 0, input = 0, sum = 0;

    cin >> n >> m;
    cin >> maximum;
    sum += maximum;

    for (i = 1; i < n; i++)
    {
        cin >> input;
        if (input > maximum)
            maximum = input;
        sum += input;
    }

    cout << max(maximum, roof(sum + m, n)) << " " << maximum + m;

    ///End

    return 0;
}