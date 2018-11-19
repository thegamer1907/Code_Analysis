#include <bits/stdc++.h>

#define fr first
#define sc second
#define mk make_pair
#define pb push_back
#define ll long long
#define OK puts("OK");
#define sz(s) (int)s.size()
#define all(s) s.begin(), s.end()

using namespace std;

const int N = 1e5 + 10;
const int inf = 1e9 + 7;

ll a[N], b[N];
int n, cnt, ans;

int rinat;

int main()
{
    string s, s1;
    cin >> s;
    int n;
    cin >> n;
    for( int i = 0 ; i < n;  i++ )
    {
        cin >> s1;
        if( s1[0] == s[1] )
        {
            cnt ++;
        }
        if( s1[1] == s[0] )
        ans++;
        if( s1[1] == s[1] && s1[0] == s[0])
            rinat ++;
    }
    if( (ans > 0 && cnt > 0) || rinat > 0 )
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
