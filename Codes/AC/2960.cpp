#include <bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   string s;
   cin>>s;
   int n = s.length();
   int z[n]={0};
   int f=-1;
   z[0] = 0;
   int y=-1;
   for (int i = 1, l = 0, r = 1; i < n; i++, r = i < r ? r : i)
      for (z[i] = min(r - i, z[i - l]); s[i + z[i]] == s[z[i]]; z[i]++, r = i + z[i], l = i);
   //for(int i=0;i<n;i++)
   //cout<<z[i];
   vector<vector<int> >v(n+2);
   vector<vector<int> >u(n+2);
   for(int i=n-1;i>=0;i--)
   {
      if(z[i]==0)
      continue;
      if(z[i]+i==n)
      v[z[i]].push_back(i);
      else
      u[z[i]].push_back(i);
   }
   /*cout<<endl;
   for(int i=n-1;i>=0;i--)
   {
      cout<<i<<"-"<<v[i].size()<<" ";
   }*/
   for(int i=n-1;i>=0;i--)
   {
      if(u[i].size()>0)
      f=1;
      if(v[i].size()>0 && f==1)
      {
         y = v[i][0];
         break;
      }
      if(v[i].size()>0)
      f=1;
   }
   if(y==-1)
   {
      cout<<"Just a legend"<<endl;
      return 0;
   }
   int r=z[y];
   for(int i=y;i<y+r;i++)
   cout<<s[i];
   cout<<endl;
   return 0;
}
