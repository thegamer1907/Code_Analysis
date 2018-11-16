#include <iostream>

using namespace std;

int main()
{
   int n,t;
   cin>>n>>t;
   char A[n],s;
   for(int i=0;i<n;i++)
   {
       cin>>A[i];
   }
while(t>0)
{
   for(int j=0;j<n;j++)
       {
          if (A[j]=='B'&&A[j+1]=='G')
               {
                s=A[j+1];
                 A[j+1]=A[j];
                 A[j]=s;
                 j++;
                 }

       }
       t--;
}

   for(int k=0;k<n;k++)
   {
       cout<<A[k];
   }
    return 0;
}
