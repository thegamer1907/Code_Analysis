#include <bits/stdc++.h>
using namespace std;
map <string, int> mymap;
int as = 0;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, k = 0;
    cin >> n >> m;
    string s1[n], s2[m];
    for( int i = 0; i < n; ++i )
    {
        cin >> s1[i];
        mymap[s1[i]] = as;
        ++as;
    }
    for( int i = 0; i < m; ++i )
    {
        cin >> s2[i];
        if( mymap.find(s2[i]) != mymap.end() ) ++k;
    }
    if( k % 2 == 0 && n <= m ) cout << "NO";
    else if( k % 2 != 0 && n < m ) cout << "NO";
    else cout << "YES";
    //cout << k;
}
