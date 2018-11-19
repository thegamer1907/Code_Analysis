#include<iostream>
#include<cmath>
 using namespace std;
 #define LL long long int
 int main(){
 char a,b,x,y;
 cin>>a>>b;
 int T,first=0,second=0;
 cin>>T;
 while(T--){
 cin>>x>>y;
 if(x==b)first=1;
 else if(y==a)second=1;
 if((x==a && y==b)||(x==b && y==a)){first=second=1;}
 }
 if(first&&second)cout<<"YES\n";
 else cout<<"NO\n";
 }

		  		  					  	 		  		 	 				