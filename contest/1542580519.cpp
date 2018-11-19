#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, b, a = "";
    int f = 0,f1 = 0,f2 = 0, n, i, j;

    cin>>s>>n;
    while(n--)
    {
        cin>>b;
        if(b == s)
            f = 1;
        if(b[1] == s[0])
        {
            f1 = 1;
        }
        if(b[0] == s[1])
        {
            f2 = 1;
        }
    }
    if(f ||(f1 && f2))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
