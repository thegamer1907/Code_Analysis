#include <bits/stdc++.h>
#define f first
#define s second
#define p 3.14159265
#define q for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); }
#define pb push_back
#define ll long long
const int tinf = (int)1e9 + 7;
const ll inf = (ll)1e18 + 7;
using namespace std;
ll gcd (ll a, ll b)
{
    return b ? gcd (b, a % b) : a;
}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    IOS
    ll n, m, r = 0, e = 0;
    string s, s1[1000];
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
        if (s1[i][1] == s[0]) e = 1;
    }
    for (int i = 0; i < n; i++)
        if (s1[i][0] == s[1] && e) e = 2 ;
    for (int i = 0; i < n; i++)
        if (s1[i] == s) e = 2;
    if (e == 2) cout << "YES"; else cout << "NO";


}
