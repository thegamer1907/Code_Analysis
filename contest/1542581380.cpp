//Perfection is not attainable,but if we chase perfection we can catch excellence.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define DHOKHA ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
   DHOKHA;
   double h,m,s,t1,t2;
   cin>>h>>m>>s>>t1>>t2;
   h=h+(m/60)+(s/(60*60));
   m=(m+(s/60))/5;
   s=s/5;
   if(h>12.0)
   {
   	h=0.5;
   }
   //cout<<h<<" "<<m<<" "<<s<<"\n";
   double max1=max(t1,t2);
   double min1=min(t1,t2);
   //cout<<min1<<" "<<max1<<"\n";
   ll a=1,b=1;
   if(((h>=max1 && h<=12) || (m>=max1 && m<=12) || (s>=max1 && s<=12)) || ((h>=0 && h<=min1) || (m>=0 && m<=min1) || (s>=0 && s<=min1)))
   {
   	a=0;
   }
   if(((h>=min1 && h<=max1) || (m>=min1 && m<=max1) || (s>=min1 && s<=max1)))
   {
   	b=0;
   }
   //cout<<a<<" "<<b<<"\n";
   if(a==1 || b==1)
   {
    	cout<<"YES";
    	return(0);
   }
   cout<<"NO";
   
   
}

