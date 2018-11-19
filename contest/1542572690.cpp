#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
double nu[5];
int main() {
	ios::sync_with_stdio(false);
	for(int i = 0; i < 5; i++) {
		cin>>nu[i];
		if(i==0||i==3||i==4) nu[i]*=5;
		if(nu[i]==60) nu[i]=0;
	}
	nu[1]+=nu[2]/60;
	nu[0]+=nu[1]/60;
	double t1 = min(nu[3],nu[4]);
	double t2 = max(nu[3],nu[4]);
	int flag =0;
	for(int i = 0; i < 3; i++) {
		if(nu[i] > t1 && nu[i] < t2) flag++;
		
	}
	if(flag==3 || flag==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}