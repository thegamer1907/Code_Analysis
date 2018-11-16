#include <bits/stdc++.h>
using namespace std;
string s;
int f[100002],l,r,i,k,t;
int main()
{
    //freopen("ntu.inp","r",stdin);
    //freopen("ntu.out","w",stdout);
    cin>>s; s=" "+s+"a";
    for(i=1;i<s.length()-1;i++)
        if(s[i]==s[i+1]) f[i]=f[i-1]+1;
        else f[i]=f[i-1];
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        k=f[r]-f[l-1];
        if(s[r]==s[r+1]) k--;
        cout<<k<<'\n';
    }
}
