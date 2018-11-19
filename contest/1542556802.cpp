#include <iostream>
#include <cstdio>
using namespace std;
int n,m,i,j,a[16],k,x,h;
bool f;
main()
{
      cin>>n>>m;
for(i=0;i<n;i++){
                 
      h=1; x=0;
      for(j=0;j<m;j++) {
       cin>>k;
       x=x+k*h;
       h=2*h;               
      }
      
      
      if (a[x]==0){
       a[x]=1;
       for (j=0;j<16;j++)
        if (a[j]==1 && (x&j)==0) {f=1; break;}
      }
      
      if (f==1) break;

 }                      
                      
      if(f==1)  cout<<"YES"<<endl;
          else  cout<<"NO"<<endl;

     


     //system("pause");
}
