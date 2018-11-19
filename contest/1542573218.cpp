#include <bits/stdc++.h>
using namespace std;
vector <string> v ;
string a,s;
long n ;
int main()
{
  //  freopen("vao.inp","r",stdin);
  //  freopen("ra.out","w",stdout);
    cin >> s ;
    cin >> n ;
    for (long i=1;i<=n;i++)
    {
        cin >> a;
        if (a==s)
        {
            cout << "YES"; return 0 ;
        }
        v.push_back(a);
    }
    for (long i=0;i<n;i++)
        for (long j=0;j<n;j++)
    {
       if (v[i][1]==s[0] && v[j][0]==s[1])
       {
           cout << "YES" ; return 0 ;
       }
    }
    cout << "NO" ;
    return 0;
}
