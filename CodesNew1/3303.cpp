#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,arrn[107],k;
    cin>>n>>m;
    int x=m;
  for(int i=0;i<n;i++)
    cin>>arrn[i];
  int z=*max_element(arrn,arrn+n);

   for(int i=0;i<n;i++){
    if(arrn[i]<z){
             m=m-(z-arrn[i]);
    arrn[i]=z;
    if(m==0)
        break;
    }
   }

   if(m>0){
    if(m%n==0)
        k=z+(m/n);
    else
     k=z+(m/n)+1;
   }
   else
    k=z;
   cout<<k<<" "<<z+x;
    return 0;
}
