#include <bits/stdc++.h>
using namespace std;
int num[100004];
int ti[100004];
int ans[20];
int main()
{
   int n,k;
   while(cin>>n>>k)
   {
       int a;
       memset(num,0,sizeof(num));
        memset(ans,0,sizeof(ans));
       memset(ti,0,sizeof(ti));
       for(int j=0;j<n;j++)
       {
       for(int i=0;i<k;i++)
       {
           cin>>a;
           ti[j]+=(1<<i)*a;
           num[j]+=a;
       }
       //cout<<ti[j]<<endl;
      ans[ti[j]]=1;
       }
       int f=1;
       for(int i=0;i<(1<<k)&&f;i++)
       {
           for(int j=i+1;j<(1<<k)&&f;j++)
           {
               if(ans[i]&&ans[j])
               {
                   if((i&j)==0)
                   {
                       f=0;
                   }
               }
           }
       }
       if(num[0]==0)
            f=0;
       if(ans[0]!=0){
            f = 0;
       }
       if(f)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
   }
    return 0;
}
