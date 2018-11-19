#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef unsigned int ui;

int c[26][2];

int main()
{
    string s; cin >> s;
    int n; cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n; i++)
    {
        c[v[i][0]-'a'][0]++;
        c[v[i][1]-'a'][1]++;
    }

    if(find(v.begin(), v.end(), s) != v.end())
    {
        cout << "YES\n"; return 0;
    }

    if(c[s[0]-'a'][1] && c[s[1]-'a'][0])
    {
        cout << "YES\n";
    }
    else cout << "NO\n";


    return 0;
}
