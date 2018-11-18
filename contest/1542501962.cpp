#include <functional>
#include <utility>
#include <numeric>
#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>

#include <iostream>
#include <algorithm>
#include <valarray>
#include <string.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define loop(i, from, to) for (int i = from; i <= to; i++)
#define loopr(i, from, to) for (int i = from; i >= to; i--)
#define pb(x) push_back(x)
#define mkpr(x, y) make_pair(x, y)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
//typedef vector<pair<int, int> vii;
typedef pair<int, int> ii;
typedef vector<ll>::iterator intIt;

bool isPost(int n)
{
    return n > 0;
}
bool isNeg(int n) { return n < 0; }
void dance()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void eraseChar(string &str, char ch)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            str.erase(i, 1);
            i--;
            continue;
        }
    }
}
void eraseWord(string &str, string word)
{
    int n;
    if (strstr(str.c_str(), word.c_str()))
    {
        n = str.find(word);
        str.erase(n, n + word.length());
    }
}
ll fact(ll x)
{
    unsigned int n;
    unsigned long long factorial = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}
bool isprime4(ll n)
{
    if (n == 2)
        return true;

    if (n < 2 || n % 2 == 0)
        return false;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    dance();
    string str, *st;
    int n, first = 0, second = 0;
    cin >> str >> n;
    st = new string[n];

    for (size_t i = 0; i < n; i++)
        cin >> st[i];

    for (size_t i = 0; i < n; i++)
    {

        if (str == st[i])
        {
            cout << "YES";
            return 0;
        }

        if (str[0] == st[i][1])
            first++;
        if (str[1] == st[i][0])
            second++;
    }

    if (first > 0 && second > 0)
        cout << "YES";
    else
        cout << "NO";
}