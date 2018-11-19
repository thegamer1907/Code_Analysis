#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1;
    cin >> s1;
    ll n;
    cin >> n;
    string s2;
    ll ctr1=0;
    ll ctr2=0;
    ll f=0;
    while(n--)
    {
        cin >> s2;
        if(s1==s2)
        {
            f=1;
            cout << "YES" << endl;
        }
        if(s2[0]==s1[1])
            ctr1++;
            if(s2[1]==s1[0])
            ctr2++;
    }
if(f==1)
    return 0;
    if(ctr1>0&&ctr2>0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;



}
