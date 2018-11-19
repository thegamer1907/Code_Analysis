#include <bits/stdc++.h>
#define ll long long

using namespace std;
void task();
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	task();
	return 0;
}
double clock_s(int x,int m,int c){
	double w=m+c/60.;
	double d=x*30+w*0.5;
	if(d>360)
		d-=360;
	return d;
}
double clock_m(int x,int c){
	double d=x*6 +0.1*c;
	if(d>360)
		d-=360;
	return d;
}
double clock_c(int x){
	return x*6;
}
void task(){
	int s,m,c,t1,t2;
	cin>>s>>m>>c>>t1>>t2;
	double w1=clock_s(t1,0,0);
	double w2=clock_s(t2,0,0);
	double x=clock_s(s,m,c);
	double x1=clock_m(m,c);
	double x2=clock_c(c);
	double m1=max(w1,w2);
	double n1=min(w1,w2);

	if(m1>=x && n1<=x && m1>=x1 && n1<=x1 && m1>=x2 && n1<=x2)
		puts("YES");
	else {
	///	cout<<x<<" "<<x1<<" "<<x2;
		int cnt=0;
		if(m1<=x || n1>=x)
			cnt++;
		if(m1<=x1 || n1>=x1)
					cnt++;

		if(m1<=x2 || n1>=x2)
					cnt++;
		if(cnt==3)
			puts("YES");
		else
			puts("NO");
	}

}
