#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    
  
      long long  int n,m,mx=1;
        cin>>n>>m;
       long long int sum=m;
      long long int x=n;
        while(n--){
        	long long int t;
        	cin>>t;
        	sum=sum+t;
        mx=	max(mx,t);
        }
       long long z=sum/x;
      double s=1.0*sum/x;
    //  cout<<float(s)<<endl;
      double v=s-z;
      if(v>0.0){
      	z=z+1;
      }
      if(z<mx){
      	z=mx;
      }
       cout<<z<<" "<<mx+m<<endl;
}