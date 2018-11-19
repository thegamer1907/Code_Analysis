#include<bits/stdc++.h>
using namespace std;
string ss,s[110];
int main()
{
    int n;
    cin>>ss;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    bool flag=0;
    for(int i=0;i<n;i++)
    if(s[i]==ss) {flag=1;break;}
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(ss[0]==s[i][1]&&ss[1]==s[j][0]) {flag=1;break;}
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
