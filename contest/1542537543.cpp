#include<iostream>
#include<algorithm>
using namespace std;
double h,m,s,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	h+m/60+s/3600>min(t1,t2)&&h+m/60+s/3600<max(t1,t2)&&(m+s/60)/5.0>min(t1,t2)&&(m+s/60)/5.0<max(t1,t2)&&s/5.0>min(t1,t2)&&s/5.0<max(t1,t2)||!(h+m/60+s/3600>min(t1,t2)&&h+m/60+s/3600<max(t1,t2))&&!((m+s/60)/5.0>min(t1,t2)&&(m+s/60)/5.0<max(t1,t2))&&!(s/5.0>min(t1,t2)&&s/5.0<max(t1,t2))?cout<<"YES\n":cout<<"NO\n";
	return 0;
}