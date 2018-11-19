#include <bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	float S,M,H;
	
	h=h%12;
	S=6.0*s;
	M=(m+s/60.0)*6.0;
	H=((h+m/60.0+s/(60.0*60.0))*30);
	//t1 always smaller
	// cout<<endl;
	//cout<<H<<"^"<<M<<"^"<<S<<endl;
	// cout<<endl;


	H = roundf(H * 100) / 100;
	M = roundf(M * 100) / 100;
	S = roundf(S * 100) / 100;

	bool x=0;
	//cout<<t1<<"%"<<t2<<endl;
	t1=t1%12;
	t2=t2%12;
	// if(t1==12) t1=0;
	// if(t2==12) t2=0;
	t1=t1*30;
	t2=t2*30;
	if(t1>t2){
		int temp=t1;
		t1=t2;
		t2=temp;
	}
	
	
	//cout<<t1<<"%"<<t2;
	// cout<<endl;
	if((S>t1&&S<t2)||(M>t1&&M<t2)||((H>t1&&H<t2))){
		x=1;
	}else{
		cout<<"YES";
		return 0;
	}
	if(((S>t2)||(S<t1))||((M>t2)||(M<t1))||((H>t2)||(H<t1))){
		x=1;

	}else{
		cout<<"YES";
		return 0;
	}
	if(x==1){
		cout<<"NO";
		return 0;
	}


	return 0;
}