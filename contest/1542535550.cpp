#include <bits/stdc++.h>
	
using namespace std;

main(){
double h[3],m,s,t1,t2;
cin>>h[0]>>h[1]>>h[2]>>t1>>t2;
//    h      m     s
h[1]=h[1]+h[2]/60.0;
//h[0]=h[0]+h[1]/60.0;
t1=t1*5.0;
t2=t2*5.0;
h[0]=h[0]*5.0;
h[0]=h[0]+h[1]/12.0;
if(t1>t2)swap(t1,t2);
if(h[0]>60)h[0]=h[0]-60;
sort(h,h+3);
//cout<<h[0]<< " "<<h[1]<< " "<<h[2]<<endl;
//cout<<t1<<" "<<t2	<<endl;;

if(h[2]<t1&&h[2]<t1)return cout<<"YES",0;
if(t1<h[0]&&t2<h[0])return cout<<"YES",0;
if(h[0]<t1&&h[0]<t2&&t1<h[1]&&t2<h[1])return cout<<"YES",0;
if(h[1]<t1&&h[1]<t1&&t1<h[2]&&t2<h[2])return cout<<"YES",0;
if(t2>h[2]&&t1<h[0])return cout<<"YES",0;



cout<<"NO";
}