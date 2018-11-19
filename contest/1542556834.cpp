#include <iostream>
#include <cstdio>
using namespace std;
int a,b,c1,c2,c3,c4,k[1000],ans;
main(){
  cin>>a>>b;
  for (int i=0;i<a;i++){
      if (b==1) {cin>>c1;k[c1]=1;}
      if (b==2) {cin>>c1>>c2;k[c1+c2*2]=1;}
      if (b==3) {cin>>c1>>c2>>c3;k[c1+c2*2+c3*4]=1;}
      if (b==4) {cin>>c1>>c2>>c3>>c4;k[c1+c2*2+c3*4+c4*8]=1;}}
  for (int i=0;i<100;i++){
      if (k[i]==1){
                   for (int j=0;j<100;j++){
                       if (k[j]==1 && (i&j)==0) {ans=1;}}}}
                       if (ans==1) cout<<"YES"<<endl;
                       else cout<<"NO"<<endl; 
 // system("pause");
}
