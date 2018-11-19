#include<bits/stdc++.h>
using namespace std;

int n, m, i, j;
string s, a[200];
int main()
{
    cin>>s;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]==s) {cout<<"YES";return 0;}
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
    {
        string t=a[i]+a[j];
        if (t[1]==s[0]&&t[2]==s[1]) {cout<<"YES";return 0;}
    }
    cout<<"NO";
}
