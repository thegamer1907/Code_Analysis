#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    ll l,flag=0,a,b,d=0;
    
    cin>>s;
    l=s.length();
    for (ll i = 0; i <=l-7; i++)
    {
        d=i+6;
        a=0;
        b=0;
        for(ll j=i;j<=d;j++)
        {
            if(s[j]=='0')
            a++;
            else
            b++;
        }
        if(a==7||b==7)
        {
            cout<<"YES";
            flag=1;
            break;
        }
        
        }
        if(flag==0)
        cout<<"NO";
    
    



    return 0;
}