#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define mp make_pair
#define All(v) v.begin(),v.end()
#define mod 1000000007
#define pi acos(-1)

using namespace std;
string v[105];
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];

        if(v[i] == s || (v[i][0] == s[1] && v[i][1] == s[0]))
        {
            cout << "YES\n";
            return 0;
        }
    }
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if((v[i][1] == s[0] && v[j][0] == s[1]) || (v[j][1] == s[0] && v[i][0] == s[1]))
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";


            return 0;
}
