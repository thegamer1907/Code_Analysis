#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0;
    int n;
    cin>>n;
    string s2[n];
    for(int i=0;i<n;i++)
    {
        cin>>s2[i];
        if(s2[i]==s)
            f=1;
    }
    if(f)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    f=0;
    for(int i=0;i<n;i++)
    {
        if(s2[i][1]==s[0])
            f=1;
    }
    for(int i=0;i<n;i++)
    {
        if(s2[i][0]==s[1])
        {
            f++;
            break;
        }
    }
    if(f>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
