#include<iostream>
 using namespace std;
 int main()
 {
     int n;

     cin>>n;

     int a,b,c;

     int x=0,y=0,z=0;

     int i;

     for ( i=0; i<n; i++)
     {
         cin>>a>>b>>c;

         x=x+a;
         y=y+b;
         z=z+c;
     }


     if( x==0 && y==0 && z==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;


     return 0;

 }
