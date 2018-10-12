#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    string str;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n+m; i++)
    {
        cin >> str;
        s.insert(str);
    }
    m -= (((n+m) - s.size()) % 2 );
    if(n > m)   cout << "YES\n";
    else cout << "NO\n";
}