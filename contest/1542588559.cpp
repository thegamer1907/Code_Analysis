#include <bits/stdc++.h>

using namespace std;

#define ll long long 


int h,m,s;

int t1,t2;

int main(){
	cin>>h>>m>>s>>t1>>t2;
	
	double hh = (h%12)*30.0;
	double mm = (m%60)*6.0;
	double ss = (s%60)*6.0;
	
	mm += ss/60;
	hh += mm/60;
	
	double tt1 = (t1%12)*30.0;
	double tt2 = (t2%12)*30.0;
	
	if(tt2<tt1){
		tt2 += 360;
	}
	if(hh<tt1){
		hh += 360;
	}
	if(mm<tt1){
		mm += 360;
	}
	if(ss<tt1){
		ss += 360;
	}
	
	bool ok = 0;
	if(hh<tt2 && mm<tt2 && ss<tt2){
		ok = 1;
	}
	if(hh>tt2 && mm>tt2 && ss>tt2){
		ok = 1;
	}
	
	if(ok){
		puts("YES");
	}else{
		puts("NO");
	}
	return 0;
}
