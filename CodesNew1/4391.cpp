#include <bits/stdc++.h>
using namespace std;

string s[500010];
int len[500010];
int n;

int main()
{
    int i,j;
    char ch[500010];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            cin>>s[i];
        }
        for(i=n-1;i>=1;i--)
        {
            if(s[i+1]<s[i])
            {
                for(j=1;j<s[i].length();j++)
                {
                    if(s[i][j]>s[i+1][j])
                    {
                        s[i].resize(j);
                        break;
                    }
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
