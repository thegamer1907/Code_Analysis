#include<bits/stdc++.h>
using namespace std;
string s,s1;
int u,n;
map<char,int>m1,m2;
int main()
{
    cin>>s;
    cin>>n;
    u=0;
    for(int i=1;i<=n;i++)
    {
        cin>>s1;
        if(s1==s) u=1;
        m1[s1[0]]=1;
        m2[s1[1]]=1;
    }
    if((m2[s[0]]==1&&m1[s[1]]==1)||u==1) cout<<"YES";
    else cout<<"NO";
}
