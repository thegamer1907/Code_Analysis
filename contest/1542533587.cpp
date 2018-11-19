#include<bits/stdc++.h>
using namespace std; 
int a,b;
bool f1 = false,f2 = false;
int OK(double x){
	if(x>=(double)a&&x<=(double)b)
		return 1;
	else
		return 0;
} 

struct Point{
	int hh,mm,ss;
	void Set(){
		cin>>hh>>mm>>ss; 
		hh%=12;
	}
	void solve(){
		double h = hh*30+mm*0.5+ss/120.0;
		double m = mm*6.0+ss*1.0/60.0;
		double s = ss*6.0;
		int xx=0;
		xx+=OK(h);
		xx+=OK(m);
		xx+=OK(s);
		if(xx==0||xx==3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
};
int main(){
	Point s;
	s.Set();
	cin>>a>>b;
	a%=12;
	b%=12;
	if(a>b){
		swap(a,b);
	}
	a*=30.0,b*=30.0;
	s.solve();
	return 0;
}