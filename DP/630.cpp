//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[s.length()+1]={0};
    a[0]=0;
    for(int i=2;i<=s.length();++i)
    {
        a[i]+=a[i-1];
        if(s[i-1]==s[i-2])
            a[i]++;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;++i)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }
}