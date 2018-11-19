#include <bits/stdc++.h>
using namespace std;
int n, i, j, ans;
string s, t;
char c1, c2;
map<char, int> m, p;
int main()
{
    cin>>c1>>c2;
    cin>>n;
    for (i=0;i<n;i++)
    {
        char x, y;
        cin>>x>>y;
        if (x==c1 & y==c2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        m[x]++;
        p[y]++;
    }
    if (m[c2] && p[c1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
