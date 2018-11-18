#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define fi first
#define se second
#define pb push_back
#define pbb pop_back
#define make_pair mp
#define all(x) x.begin(), x.end()
#define uniq(x) x.erase(unique(x.begin(),x.end()),x.end())
#define mem(array, value) memset(array, value, sizeof(array))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/__gcd(a,b))*b
#define line cout << "==========" << endl
#define mod 1000000007
#define SIZE 1000001

int main ()
{
    string s, rs;
    cin >> s;
    rs = s;
    reverse(all(rs));
    int n;
    cin >> n;
    string ara[n];
    for (int i = 0; i<n; i++)
        cin >> ara[i];
    for (int i = 0; i<n; i++)
        if (ara[i] == s || ara[i] == rs)
            return cout << "YES\n", 0;
    int a, b;
    a = b = 0;
    for (int i = 0; i<n; i++){
        if (ara[i][1] == s[0])
            a++;
        else if (ara[i][0] == s[1])
            b++;
    }
    if (a > 0 && b > 0){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}
