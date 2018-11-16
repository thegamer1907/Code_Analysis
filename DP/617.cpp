#include <bits/stdc++.h>

using namespace std;

//Custom ->
#define ll long long
#define pb push_back
#define pf push_front
#define in insert
#define mp make_pair
#define inf 9e18
#define pie acos(-1.0)
#define line cout << endl
#define tab "\t"

#define keepunique(v) (v).erase(unique(all(v)),v.end())
#define to_int() stoi()
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) ((x * y) / gcd(x, y))
#define all(v) v.begin(), v.end()
#define printcon(v) for(auto a : v){ cout << a << " "; }
#define cover(con, a) memset(con, a, sizeof(con))
#define sumUp(v) accumulate(v.begin(), v.end(), 0)

#define FASTREAD ios_base::sync_with_stdio(0);cin.tie(nullptr)

bool even (int a) { return (a % 2 == 0); }
bool odd (int a) { return (a % 2 != 0); }

//Global Declarations ->
int a[100001];

//Functions ->


//Driver Code ->
int main ()
{
    FASTREAD;

    string s;
    cin >> s;

    int orb = s.size();
    for (int i = (orb - 1); i >= 0; i--) {
        a[i] = a[i + 1] + (s[i] == s[i + 1]);
    }

    int m;
    cin >> m;

    while (m--) {
        int l, r;
        cin >> l >> r;

        cout << a[l-1] - a[r - 1] << endl;
    }
}
