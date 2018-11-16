#include<bits/stdc++.h>
using namespace std;
int n,s[4],a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>a;
            s[j]+=a;
        }
    }
    if(s[1]==0&&s[2]==0&&s[3]==0)cout<<"YES";
    else cout<<"NO";
}
