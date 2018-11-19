#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m,h,s,t1,t2,flag1,flag2,flag3,x,y;
	cin>>h>>m>>s>>t1>>t2;
	flag1=0;
	flag2=0;
	flag3=0;
	if(m!=0||s!=0){
		h=h*5+1;
	}
	else{
		h=h*5;
	}
	if(s!=0){
	    m=m+s/60;
	}
	if(t1>t2){
	    x=t2;
	    y=t1;
	}else{
	    x=t1;
	    y=t2;
	}
	if(h>(x*5) && h<(y*5)){
			flag1=1;
	}
	if(m>(x*5) && m<(y*5)){
			flag2=1;
	}
	if(s>(x*5) && s<(y*5)){
			flag3=1;
	}
	if(flag1==1 && flag2==1 && flag3==1){ cout<<"yes"<<endl;}
    else if(flag1==0 && flag2==0 && flag3==0){cout<<"yes"<<endl;}
    else{ cout<<"no"<<endl;}
}