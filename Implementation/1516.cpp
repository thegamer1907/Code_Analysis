//g++  5.4.0

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    if(s.length()<7)
    {cout<<"NO"; return 0;}
    for(int i=0;i<=s.length()-7;i++)
    {
        if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] &&   s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6])
        { cout<<"YES"; return 0;}
    }
    
    cout<<"NO";
    return 0;
}