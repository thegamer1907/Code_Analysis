#include <iostream>
#include<cstdio>

using namespace std;

int ar[30001]={0};
int root[30001]={0};

int main()
{
   //freopen("a.in","r",stdin);
   bool ok=false;
   int n,t,a;
   cin>>n>>t;
   root[1]=1;
   for(int i=1;i<=n;i++)
   {
       cin>>a;
       ar[i]=a+i;
   }
   for(int i=1;i<=n;i++)
   {
       if(root[ar[i]]==0)
       {
           root[ar[i]]=root[i];
       }

   }

   if(root[t]==1)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}
