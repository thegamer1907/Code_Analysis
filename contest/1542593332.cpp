#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
set<string> s;
string a;
string b;
ll n;
bool xx;
bool yy;
int main()
{
        cin >> a;
        cin >> n;
        for(ll i=1;i<=n;i++)
        {
                cin >> b;
                s.insert(b);
        }
        if(s.find(a) != s.end())
        {
                cout << "YES\n";
                return 0;
        }
        for(auto i : s)
        {
                if(i[0] == a[1]) xx = true;
                if(i[1] == a[0]) yy = true;
        }
        if(xx && yy)
        {
                cout << "YES\n";
                return 0;
        }

        cout << "NO\n";
        return 0;

}
