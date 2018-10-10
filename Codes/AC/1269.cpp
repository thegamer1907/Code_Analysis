#include <bits/stdc++.h>
using namespace std;

int m,n,Count=0,C1=0,C2=0;
string s1[1005],s2[1005];
map<string,int> mm;

int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>s1[i];
        mm[s1[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>s2[i];
        mm[s2[i]]++;
    }
    for(int i=1;i<=m;i++)
        if(mm[s1[i]]==1)
            C1++;
        else
            Count++;
    for(int i=1;i<=n;i++)
        if(mm[s2[i]]==1)
            C2++;
    if(Count%2==0)
    {
        if(C1>C2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        if(C2>C1)
            cout<<"NO";
        else
            cout<<"YES";
    }
}
