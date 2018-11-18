#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
    bool firstExists = 0, lastExists = 0;
    string password;
    cin>>password;
    int n;
    cin>>n;
    bool ok = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        if(s == password)
            ok = 1;
        if(s[1] == password[0])
            firstExists = 1;
        if(s[0] == password[1])
            lastExists = 1;
    }
    if(firstExists && lastExists)
        ok = 1;
    if(ok)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
