#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin>>a>>b;
    int n,p=1,q=1;
    cin>>n;
    char s[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {cin>>s[i][j];
        if(s[i][0]==a&&s[i][1]==b)
        {
            cout<<"YES";
            return 0;
        }
        if(s[i][0]==b)
            p=0;
        if(s[i][1]==a)
            q=0;
        }
        if(p==0&&q==0)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
return 0;
}
