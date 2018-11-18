#include <bits/stdc++.h>

using namespace std;
string s[110];
int main()
{
    bool ok1=0,ok2=0,ok3=0;
    int n;
    cin>>s[0];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cin>>s[i];
    if(s[i][0]==s[0][1])
    ok1=1;
    if(s[i][1]==s[0][0])
    ok2=1;
    if(s[0]==s[i])
    ok3=1;
    }
    (ok3||(ok1&&ok2))?cout<<"YES":cout<<"NO";
    return 0;
}
