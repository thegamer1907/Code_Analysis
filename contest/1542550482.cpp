#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    cin >> ss;
    int n, a=0, b=0;
    cin >> n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s==ss)
        {
            a=1;b=1;
        }
        if(s[0]==ss[1])
            a=1;
        if(s[1]==ss[0])
            b=1;
    }
    if(a!=0&&b!=0)
        cout << "YES" << endl;
    else cout << "NO" <<endl;
}
