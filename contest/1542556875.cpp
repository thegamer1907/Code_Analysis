#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<string>v;
int n,k,p[4];
string s="";
main()
{
      cin>>n>>k;
      for(int i=0;i<n;i++)
      {
              int x=0;s="";char a;
              for(int j=0;j<k;j++)
              cin>>a,s+=a;
              if(s=="0" || s=="00" || s=="000" || s=="0000"){cout<<"YES"<<endl;return 0;}
              if(mp[s]==0)
              mp[s]=1,v.push_back(s); //cout<<s<<endl;
      }
      
      
      for(int i=0;i<v.size();i++)
      for(int j=0;j<v.size();j++)
      if(i!=j)
      {
          int r=0;
          for(int t=0;t<v[i].size();t++)
          if(v[i][t]==v[j][t] && v[i][t]!='0')
          r=1;
          
          if(r==0)
          {cout<<"YES"<<endl;return 0;}
          
          
      }
      cout<<"NO"<<endl;
}
