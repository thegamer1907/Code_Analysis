#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m,sum=0; cin>>n>>m; map<string,int>mp;
for(int i=0;i<n;i++){string x; cin>>x; mp[x]++; }
for(int i=0;i<m;i++){string x; cin>>x; mp[x]++; if(mp[x]>1)sum++; }
   if(n>m)cout<<"YES"<<endl;
    else if(m>n)cout<<"NO"<<endl;
   else
   {if(sum%2==0)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
   }

    return 0 ;

}
