#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int m,l,r;cin>>m;
    int x[100004];
    for(int i=s.length()-2;i>=0;i--)
    x[i]=x[i+1] + (s[i]==s[i+1]);
    
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        cout<<x[l-1]-x[r-1]<<endl;
    }
}