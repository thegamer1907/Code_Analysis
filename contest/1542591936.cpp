#include<bits/stdc++.h>
using namespace std;
char dd[105][5];
int main()
{
    char s[5];
    cin>>s;
    int n,sign=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>dd[i];
    for(int i=1;i<=n;i++)
    {
        if((s[0]==dd[i][0]&&s[1]==dd[i][1])||(s[0]==dd[i][1]&&s[1]==dd[i][0]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    int dd1=0,dd2=0;
    for(int i=1;i<=n;i++)
    {
        if(dd[i][1]==s[0]) dd1=1;
        if(dd[i][0]==s[1]) dd2=1;
    }
    if(dd1&&dd2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
