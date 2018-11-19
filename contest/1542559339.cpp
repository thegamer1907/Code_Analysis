#include<iostream>
using namespace std;
int main(){
	double h,m,s,t1,t2,t1new,t2new;
	cin>>h>>m>>s>>t1>>t2;
	m=m/5;
	s=s/5;
	if(h==12){
		h=0;
	}
	if(m==12){
		m=0;
	}
	if(s==12){
		s=0;
	}
	if(t1==12){
		t1=0;
	}
	if(t2==12){
		t2=0;
	}
	h=h+(m/60)+(s/3600);
	m=m+(s/60);
	t1new=min(t1,t2);
	t2new=max(t1,t2);
	t1=t1new;
	t2=t2new;
	int cnt=0;
	//cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<"\n";
	if(t1<=h && h<=t2){
		//cout<<"in h\n";
		cnt++;
	}
	if(t1<=m && m<=t2){
		cnt++;
		//cout<<"in m\n";
	}
	if(t1<=s && s<=t2){
		cnt++;
		//cout<<"in s\n";
	}
	if(cnt%3==0){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}