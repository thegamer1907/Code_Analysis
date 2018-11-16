#include <bits/stdc++.h>///                                               777
#define fr first
#define sc second
#define pp pop_back
#define pb push_back
#define r_0 return 0
#define ll long long
#define ld long double
#define foi freopen( "input.txt", "r", stdin );
#define foo freopen( "output.txt", "w", stdout );
using namespace std;
void speed()
{
        ios::sync_with_stdio(NULL);
        cin.tie(0);
}
int n, m, k, cnt, ans, sum, x, y;
string s, s1, a, b, c;
vector<int>v;
set<int> st;
int main()
{
    speed();
    cin >> n;
    int boy[n];
    for ( int i = 0; i < n; i ++ )
            cin  >> boy[i];
        cin >> m;
        int girl[m];
        for ( int i = 0; i < m; i ++ )
                cin >> girl[i];
        sort (boy,boy + n);
        sort (girl,girl + m);
        for ( int i = 0; i < n; i ++)
        {
                for ( int j = 0; j < m; j ++ )
                {
                        if ( abs(boy[i] - girl[j]) <= 1)
                                {
                                        cnt++;
                                        girl[j] = 1000;
                                        break;
                                }
                }
        }
        cout << cnt;
 }
