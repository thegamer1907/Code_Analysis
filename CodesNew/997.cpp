#include<bits/stdc++.h>
using namespace std;
main()
{
   int n,m;
   cin>>n>>m;
   vector<string > p(n),e(m);
   for(int i=0;i<n;i++)
    cin>>p[i];
   for(int i=0;i<m;i++)
    cin>>e[i];
   int cmn=0;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(p[j]==e[i])
           {
               cmn++;
               break;
           }
       }
   }
   int flag=-1;
   if(cmn%2)
    flag*=-1;
   if(n>m)
   {
       flag=1;
   }
   else if(n<m)
   {
       flag=-1;
   }
   if(flag==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
