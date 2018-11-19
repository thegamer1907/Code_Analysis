#include<bits/stdc++.h>
 using namespace std;
 long long k,m,n,i,j;
 map<char,long long>mp;
 map<char, long long>mp1;
 string l,s,t;
  int main()
{
    cin>>s>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t==s){cout<<"YES";return 0;}
        if(t[0]==s[1])mp[t[0]]++;
        if(t[1]==s[0])mp1[t[1]]++;
    }
    if(mp1[s[0]]>0&&mp[s[1]]>0)cout<<"YES";
    else cout<<"NO";
}
