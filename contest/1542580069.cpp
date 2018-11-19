#include<iostream>
#include<stdio.h>
#include"stdlib.h"
#include<string.h>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(double h,double m,double s,double t1,double t2){
	double a = max(t1,t2);
	double b = min(t1,t2);
	if((a > h && b < h) && (a > m && b < m) && (a > s && b < s)){
		return true;
	}else if((a > h && b < h) || (a > m && b < m) || (a > s && b < s)){
		return false;
	}
	return true;
}

double mod(double h){
	if(h > 60) return h - 60;
		return h;
}

int main()
{
	double h,m,s,t1,t2;
	while(cin >> h >> m >> s >> t1 >> t2){
		h = h * 5 + m / 60 + s /3600;
		h = mod(h);		
		m = m + s / 60;
		t1 = mod(t1 * 5);
		t2 = mod(t2 * 5);
		if(cmp(h,m,s,t1,t2))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}