#include <bits/stdc++.h>///                                               777
#define fr first
#define sc second
#define pp pop_back
#define pb push_back
#define r_0 return 0
#define ll long long
#define ld long double
#define speed ios_base::sync_with_stdio(0);
#define foi freopen( "input.txt", "r", stdin );
#define foo freopen( "output.txt", "w", stdout );
using namespace std;
int n, m, k, cnt, ans, sum, x, y;
string s, s1, a, b, c;
vector<int>v;
set<int>st;
int main()
{
    speed
    cin >> n >> m;
    int arr[n];
    for ( int i = 0; i < n; i++ )
                    cin >> arr[i];

             k = arr[m - 1];
        for ( int i = 0; i < n; i ++ )
        {
                if ( arr[i] >= k and arr[i] >= 1 )
                        cnt ++;
        }
        cout << cnt;
}
