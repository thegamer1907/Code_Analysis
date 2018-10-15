#include <bits/stdc++.h>

using namespace std;

string s[500010];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]>s[i+1])
        {
            for(int j=0;j<s[i].size();j++)
            {
                if(s[i][j]>s[i+1][j])
                {
                    s[i].resize(j);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
