#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
          lli n,m;
          cin>>n>>m;
          vector<lli>v(n);
          
          for(lli i=0;i<n;i++)
          cin>>v[i];
          
          sort(v.begin(),v.end());
          
          lli sum=0;
          for(lli i=0;i<n-1;i++)
          sum+=v[n-1]-v[i];
          
          lli maxi=*max_element(v.begin(),v.end());
          lli mini;
          
          if(m<=sum)
          mini=maxi;
          else
          {         lli e;
                    if((m-sum)%n)
                    e=(m-sum)/n+1;
                    else
                    e=(m-sum)/n;
                    
                    // cout<<e<<endl;
                    mini= maxi+ e;
          }
          
          
          
          cout<<mini<<" "<<maxi+m<<endl;
          
          return 0;
}