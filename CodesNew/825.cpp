#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;cin>>n>>m;

   map<string,bool> p;

   for(int i=0;i<n;i++)
   {
       string s;cin>>s;
       p.insert(make_pair(s,true));
   }

   int cnt=0;

   for(int i=0;i<m;i++)
   {
       string s;cin>>s;
       if(p.find(s)!=p.end())cnt++;
   }

   if(cnt%2==0)
   {
       n-=cnt/2;
       m-=cnt/2;
   }
   else
   {
       n-=cnt/2;
       m-=(cnt/2 + 1);
   }

   if(n>m)
   {
       cout<< "YES"<<endl;
   }
   else
   {
       cout<< "NO"<<endl;
   }

    return 0;




}
