#include <iostream>

using namespace std;

int main()
{
    int nn[100];
    int n,k;
    cin>>n>>k;

   int count=0;
   for(int i=0;i<n;i++)
   {
       cin>>nn[i];

   }
   int test=nn[k-1];
   for(int i=0;i<n;i++)
   {
    if(nn[i]>=test && nn[i]>0)
        count++;
   }
   cout<<count<<endl;
    return 0;
}
