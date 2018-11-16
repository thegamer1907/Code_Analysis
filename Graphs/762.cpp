#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,t;
    cin>>n>>t;
    
    string str;
    cin>>str;
    
    
    for(ll i=1;i<=t;i++)
    {
        for(ll j=0;j<n-1;)
        {
            if(str[j]=='B' && str[j+1]=='G')
                {
                    swap(str[j],str[j+1]);
                    j=j+2;
                }
                else
                    j++;
        }
    }
    
    cout<<str<<endl;
    
    
    
    return 0;
}