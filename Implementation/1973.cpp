#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;int sumofx=0;int sumofz=0;int sumofy=0;
   int x;int y;int z;
   cin>>n;
   int equations[100][3];
   for(int i=0;i<n;i++){
        cin>>equations[i][0];
        cin>>equations[i][1];
        cin>>equations[i][2];

   }
   for(int i=0;i<n;i++){

     x=equations[i][0];
   sumofx=sumofx+x;
   y=equations[i][1];
   sumofy=sumofy+y;
   z=equations[i][2];
   sumofz=sumofz+z;}
   if(sumofx==0 && sumofy==0 && sumofz==0){
    cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}

}
