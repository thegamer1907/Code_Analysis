#include<bits/stdc++.h>
using namespace std;

#define sd(mark) scanf("%d",&mark)
#define ll long long
#define N 500010
string s[N];

int main()
{
    int n,i,j;
    sd(n);
    for(i=0;i<n;i++)
        cin>>s[i];

    for(i=n-2;i>=0;--i)
    {
        if(s[i]<=s[i+1])    
            continue;
        for(j=0;j<min(s[i].length(),s[i+1].length());j++)
            if(s[i][j]!=s[i+1][j])
                break;
        s[i] = s[i].substr(0,j);
    }
    for(i=0;i<n;i++)
        cout<<s[i]<<'\n';
}