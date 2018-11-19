#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    map<char,int> m1,m2;
    map<string,int> m;
    m.clear();
    m1.clear();
    m2.clear();
    string s;
    cin>>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        m[s1]=1;
        m1[s1[0]]=1;
        m2[s1[1]]=1;
        if(s1[0]==s[1] && s1[1]==s[0])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
        return 0;
    }
    if(m[s]==1 || (m2[s[0]]==1 && m1[s[1]]==1))
    {
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;

}
