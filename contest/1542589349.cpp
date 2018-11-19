#include<bits/stdc++.h>
using namespace std;
bool l1,l2,r1,r2;
int main()
{
    string s,s1;
    cin >> s;
    int n;
    cin >> n;
    bool yes = 0;
    while(n--)
    {
        cin >> s1;
        if((s1[0]==s[1] && s1[1] == s[0]) || (s==s1))
        {
            yes = 1;
        }
        if(s1[1] == s[0]) {r1 = 1;}
        if(s1[0] == s[1]) l1 = 1;
    }
    if(l1 && r1) yes = 1;
    if(yes) cout << "YES" << endl;
     else cout << "NO" << endl;
}
