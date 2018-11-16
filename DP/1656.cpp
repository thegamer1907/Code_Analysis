//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    int ab=0;
    string as=s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            ab=1;
            s[i]=0;
            s[i+1]=1;
            break;
        }
    }
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            if(ab)
                cout<<"YES";
            else
                cout<<"NO";
            return 0;
        }
    }
    s=as;
    ab=0;
    for(int i=0;i<s.length()-1;++i)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            ab=1;
            s[i]=0;
            s[i+1]=1;
            break;
        }
    }
    for(int i=0;i<s.length()-1;++i)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            if(ab)
                cout<<"YES";
            else
                cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
}