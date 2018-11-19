#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll  i,j,k,l,c,b,n,m,r,t;
    double x,x1,x2,x3,x4;
    string s,s1,s2,s3,s4[10000];
    map<ll,ll>mp;
    while(cin>>s )
    {
        l=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s4[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s4[i][1]==s[0]&&s4[j][0]==s[1])
                    l=1;
                if(s4[i][0]==s[0]&&s4[i][1]==s[1])
                    l=1;
            }
        }

                if(l==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
    }


