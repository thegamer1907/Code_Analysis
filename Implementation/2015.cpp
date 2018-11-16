#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       
       int xs=0,ys=0,zs=0;
       int x,y,z;
      
       while(n--)
       {
              cin>>x;
              xs += x;
              
              cin>>y;
              ys +=y;
              cin>>z;
              zs += z;
             
       }
       if(xs==0 and ys==0 and zs ==0)
       cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   
}