#include<bits/stdc++.h>
using namespace std;

int main(){
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=h+m/60 + s/3600;
	m=m+s/60;
	
	m= m/5;
	s= s/5;
	
	h=h>12.0?h-12.0:h;
	m=m>12.0?m-12.0:m;
	s=s>12.0?s-12.0:s;
    int ant=0,cl=0;
    
    
	if((t1>h && h>t2)  ||  (t2>t1 && h>t2) || (t1>h && t1<t2)){
		ant=1;
	}
	else{
		cl=1;
	}
	

	if((t1>m && m>t2)  ||  (t2>t1 && m>t2) || (t1>m && t1<t2)){
		ant=1;
	}
	else{
		cl=1;
	}
	
	
	if((t1>s && s>t2)  ||  (t2>t1 && s>t2) || (t1>s && t1<t2)){
		ant=1;
	}
	else{
		cl=1;
	}

	if(ant==0 || cl==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
