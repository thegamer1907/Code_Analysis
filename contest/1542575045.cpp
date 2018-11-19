#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,p;
    int n;
    bool f1 = false, f2 = false;
    cin >> s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        if(p == s)
        {
            f1 = true;
            f2 = true;
        }
        if(p[0] == s[1])
            f1 = true;
        if(p[1] == s[0])
            f2 = true;
    }
    if(f1 && f2)
        cout << "Yes";
    else
        cout << "No";
}