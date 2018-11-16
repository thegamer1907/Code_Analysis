#include <iostream>
using namespace std;
int n,k,c, a[50];
int main()
{
    c=0;
   cin>>n>>k;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<n;i++){
       if(a[i]<=0)
       break;
       if(a[i]<a[k-1])
       break;
       c++;
   }
    cout<<c;
    return 0;
}
