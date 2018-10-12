#include<bits/stdc++.h>

using namespace std;

int n,i,j,len;
string str[500010];

int main()
{
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        cin>>str[i];
    for (i=n-1;i>=1;i--)
    {
        if (str[i]<=str[i+1]) continue;
        len=str[i].length();
        for (j=1;j<len;j++)
        {
            if (str[i][j]==str[i+1][j]) continue;
            str[i]=str[i].erase(j);
            break;
        }
    }
    for (i=1;i<=n;i++)
        cout<<str[i]<<"\n";
}