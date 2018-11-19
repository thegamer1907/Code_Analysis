#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,s,m,t1,t2,flagprotiv=1,flagpo=1;
	cin>>h>>m>>s>>t1>>t2;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	t1=t1*5*5;
	t2=t2*5*5;
	if(h==12)h=0;
	h=h*5*5;
	
	
	
	if(m==60)m=0;
	m=m*5;
	if(s==60)h=0;
	s=s*5;
	
	if(s>0||m>0)h+=2;
	if(s>0)m+=2;
	
	
	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2;
	
	int tt1=t1;
	while(1){
	tt1++;if(tt1==300)tt1=0;
	if(tt1==t2)break;
	if(tt1==h||tt1==s||tt1==m){
		flagpo=0;break;
	}	
	}
	tt1=t1;
	while(1){
	
	tt1--;if(tt1==-1)tt1=299;
	if(tt1==t2)break;
	if(tt1==h||tt1==s||tt1==m){
		flagprotiv=0;break;
	}	
	}
//	cout<<flagpo<<flagprotiv;
	if(flagpo||flagprotiv)cout<<"YES";else cout<<"NO";
}