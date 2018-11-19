#include<bits/stdc++.h>
#define long long long
using namespace std;
string s,x[102],z;
long n;
bool check(string s1,string s2)
{
    z.clear();
    z=s1+s2;
    if(s[0]==z[0]&&s[1]==z[1])return true;
    if(s[0]==z[1]&&s[1]==z[2])return true;
    if(s[0]==z[2]&&s[1]==z[3])return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(long i=1;i<=n;i++)
    {
        for(long j=1;j<=n;j++)
        {
            if(check(x[i],x[j])||check(x[j],x[i]))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
