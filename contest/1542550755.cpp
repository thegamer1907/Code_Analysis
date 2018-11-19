#include<bits/stdc++.h>

using namespace std;

const int Maxn=1e2+10;

int n;
string t,s[Maxn];

int main()
{
    cin>>t>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        if(s[i]==t)
            return cout<<"YES\n",0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {
                string q="";
                q+=s[j][1];
                q+=s[i][0];
                if(q==t)
                    return cout<<"YES\n",0;
            }
    return cout<<"NO\n",0;
}
