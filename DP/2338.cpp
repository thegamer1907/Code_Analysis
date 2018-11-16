#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace std;
ll fact(ll n)
{ll ret=1;
    for(ll i=1;i<=n;i++)
    {
        ret*=i;
    }
    return ret;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    string x;cin>>x;
    int n=x.length();
    string y[26];int curr=0;
    for(int i=0;i<26;i++)
    {
        y[i]=to_string(curr);
        curr+=8;
    //cout<<y[i]<<endl;
    }
    int fl=0;
    string ans="";
    for(int j=0;j<26;j++)
    {
        ans="";
        int te=0,sfl=0,tfl=0;
        if(y[j].length()>2){tfl=1;sfl=1;}
        for(int i=0;i<n;i++)
        {
            if(sfl==1)
            {
                if((x[i]-'0')%2==1){ans+=x[i];sfl=0;continue;}
            }
            if(sfl==0)
            {
                if(x[i]==y[j][te+tfl]){ans+=x[i];te++;if(te+tfl==y[j].length()){fl=1;break;}}
            }
        }
        if(fl==1){break;}
    }
    if(fl){cout<<"YES"<<endl<<ans;}
    else{cout<<"NO";}
}
