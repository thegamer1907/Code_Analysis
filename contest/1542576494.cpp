#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int n,c=0,c2=0;
    cin >> s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s1;
        if(s1==s)
            c = 1 , c2 = 1;
        else if(s1[0]==s[1])
            c = 1;
        if(s1[1]==s[0])
            c2 = 1;
    }
    if(c && c2)
        cout << "YES\n";
    else
        cout << "NO\n";
}
