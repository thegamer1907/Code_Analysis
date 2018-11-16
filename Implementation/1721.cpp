#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i=0,n;
    string s;
    cin>>s;
    n=s.length();
    while(i<n)
    {
        if(s[i]=='0')
        {
            ll t=1,j=i+1;
            while(j<n && s[j]=='0')
            {
                j++;
                t++;
            }
            if(t>=7)
            {
                cout<<"YES";
                return 0;
            } 
        }
        else 
        {
            ll t=1,j=i+1;
            while(j<n && s[j]=='1')
            {
                j++;
                t++;
            }
            if(t>=7)
            {
                cout<<"YES";
                return 0;
            } 
        }
        i++;
        
    }
    cout<<"NO";
    
}