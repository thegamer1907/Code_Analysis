#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,me;
    cin>>n>>me;
    map<string,ll>m;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]+=1;
    }
    for(ll i=0;i<me;i++)
    {
        string s;
        cin>>s;
        m[s]-=1;
    }
    ll count1=0,count0=0,count2=0;
    for(auto it=m.begin();it!=m.end();it++)
        if((*it).second==1)
            count1++;
        else
            if((*it).second==-1)
                count2++;
            else
                count0++;
            
            if(count0%2==0)
            {
                if(count1>count2)
                    cout<<"YES";
                else
                    cout<<"NO";
                return 0;

            }
            else
            {
                if(count1+1>count2)
                    cout<<"YES";
                else
                    cout<<"NO";
                return 0;
            }
   
    return 0;
}