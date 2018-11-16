#include <bits/stdc++.h>
using namespace std;
long long m,f[100002],l,r;
string s;
int main()
{
    cin>>s>>m;
    for(long i=s.length()-2; i>=0; i--)
        f[i]=f[i+1]+(s[i]==s[i+1]);
    while(m--)
    {
        cin>>l>>r;
        cout<<f[l-1]-f[r-1]<<endl;
    }
}
