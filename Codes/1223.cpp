#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for ( int i = a ; i < b ; i++ )

int main()
{
    // freopen("input.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    set<string> A, B;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        // cout << s << endl;
        A.insert(s);
    }   
    rep(i, 0, m)
    {
        string s;
        cin >> s;
        // cout << s << endl;
        B.insert(s);
    }   
    // cout << "here";
    vector<string> intersection;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(intersection));
    int same = intersection.size();
    n -= same;
    m -= same;
    n += same%2;
    if ( n > m )
        cout << "YES";
    else
        cout << "NO";
}