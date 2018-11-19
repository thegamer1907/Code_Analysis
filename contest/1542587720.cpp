#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
double h, m, s, t1, t2;
double a[10], T1, T2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	T1=360*t1/12;
	T2=360*t2/12;
	a[0]=360*s/60;
	a[1]=360*(m+s/60)/60;
	a[2]=360*(h+m/60+s/3600)/12;
	sort(a,a+3);
	if (T1>T2) swap(T1,T2);
	if (T2<a[0] || T1>a[0] && T2<a[1] || T1>a[1] && T2<a[2] || T1>a[2] || T1<a[0] && T2>a[2]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
