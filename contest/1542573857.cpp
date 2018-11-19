#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 200005
#define Task ""
using namespace std;
string n,s;
bool dd1[maxn],dd2[maxn];
int a;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    //freopen(".inp", "r",stdin);
    cin >> n >> a;
    FOR(i,1,a)
        {
            cin >> s;
            dd1[s[0] - 'a'] = 1;
            dd2[s[1] - 'a'] = 1;
            if ( s == n)
            {
                cout << "YES";
                return 0;
            }
        }
    if ( (dd1[n[1] - 'a'] && dd2[n[0] - 'a'])) cout << "YES";
    else cout << "NO";
}
