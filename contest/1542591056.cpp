#include <bits/stdc++.h>
using namespace std;


int main() 
{
    char s[3],a[101][2];
    long i,n,f=0,g=0,h=0;
    cin>>s>>n;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i][0]==s[0] && a[i][1]==s[1]) f=1;
        if(a[i][1]==s[0]) g=1;
        if(a[i][0]==s[1]) h=1;
    }
    if(f || (g&h)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
