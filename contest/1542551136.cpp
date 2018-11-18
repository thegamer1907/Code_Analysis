#include<bits/stdc++.h> 
using namespace std;  
  
double a,b,c,t1,t2;
int count_=0;

int main()
{
	ios::sync_with_stdio(false);
    cin>>a>>b>>c>>t1>>t2;
    a=a+b/60+c/3600,b=(b+c/60)/5,c/=5;  
    double s=min(t1,t2),e=max(t1,t2);  
    if(a>=s&&a<=e) count_++;  
    if(b>=s&&b<=e) count_++;  
    if(c>=s&&c<=e) count_++;  
    if(count_%3==0) cout<<"YES\n";  
    else cout<<"NO\n";  
    return 0;  
}  
     		 	 	 	 		  			  	  	   	