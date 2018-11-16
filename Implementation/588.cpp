#include <iostream>
#include <cstring>    
using namespace std;
 
int main()
{
int n,k,i,d,t,pr=0;
cin >>n>>k;
for (i=1;i<=k;i++){
    cin>>d;
    if (d>0){pr++;};
}
t=d;
for(i=k+1;i<=n;i++){
    cin>>d;
    if ((d>0) && (d==t)) {pr++;}
}
cout<< pr;
 
  return 0;
}