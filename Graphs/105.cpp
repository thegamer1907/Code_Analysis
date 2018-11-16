//g++  5.4.0

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    string s;
    ll n,t;
    cin>>n>>t;
    cin>>s;
    //t--;
    while(t--)
    {
        //cout<<t<<endl;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {s[i]='G'; s[i+1]='B'; i=i+1;}
        }
     //   cout<<s<<endl;
    }
  
    cout<<s;
    
    
    return 0;
}