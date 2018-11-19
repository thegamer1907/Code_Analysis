#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    ll n;
    cin>>n;
    vector<string> v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        for(j=0;j<v.size();j++)
        {
            string tmp="";
            tmp+=v[i][1];
            tmp+=v[j][0];
            if(tmp==s)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
