#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    int c=0,cb=0,cg=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            cb++;
        else
            cg++;
    }
    int p[cb],k=0;
    for( ; ; )
    {
    k=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
            p[k++]=i;
    }
    for(int i=0;i<k;i++)
    {
        s[p[i]]='G';
        s[p[i]+1]='B';
    }
    c++;
    if(c==t)
        break;
    }
    cout<<s;
    return 0;
}
