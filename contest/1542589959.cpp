#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    ll n;
    cin>>n;
    char a1=s[0];
    char a2=s[1];
    vector<string> v1;
    ll flag1=0;
    ll flag2=0;
    ll ans=1;
    for(ll i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        //cin>>v1[i];
        if(s1==s)
        {
            cout<<"YES"<<endl;
            ans=0;
            break;
        }
        else
        {
            if(s1[1]==a1)
                flag1=1;

            if(s1[0]==a2)
                flag2=1;
        }
    }
    if(ans==1)
    {
        if(flag1==1 and flag2==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }

}
