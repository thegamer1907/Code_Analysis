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

            if(s4[i]==s)
                l=1;
                s1=s;
                reverse(s1.begin(),s1.end());
                 if(s4[i]==s1)
                l=1;


        }
        if(l==1)
            cout<<"YES"<<endl;
        else if(n==1&&s4[0][1]==s[0]&&s4[0][0]==s[1])
            cout<<"YES"<<endl;
        else
        {
            j=-1;
            for(i=0; i<n; i++)
            {
                if(s4[i][1]==s[0])
                {
                    j=i;
                    break;
                }

            }
            if(j==-1)
                cout<<"NO"<<endl;
            else
            {
                b=0;
                for(i=0; i<n; i++)
                {

                    if(i!=j&&s4[i][0]==s[1])
                    {
                        b=1;
                        break;
                    }

                }
                if(b==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }

}
