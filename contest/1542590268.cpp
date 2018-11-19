#include<cstdio>
#include<iostream>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<stack>
#include<string>
#include<sstream>
#include<cstring>
#include<algorithm>
using namespace std;
string a[105];
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int flag=0;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
    {
        string x=a[i]+a[j],y=a[j]+a[i];
        if (x.find(s)!=string::npos||y.find(s)!=string::npos)
        {
            flag=1;
            break;
        }
    }
    if (flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
