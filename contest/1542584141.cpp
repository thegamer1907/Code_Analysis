#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <math.h>
using namespace std;


int h,m,s,t1,t2;
int F=0,S=0;

void start(int h){
	while(h!= t1 && h!=t2){
		h++;
		if(h>=12){
			h-=12;
		}
	}
	if(h==t1){
		F++;
	} else {
		S++;
	}
}
int main(){
	cin>>h>>m>>s>>t1>>t2;
	t1--;
	t2--;
	h--;
	if(s % 5==0){
		start((s/5+11)%12);
	} else {
		start((s/5)%12);
	}
	if(m%5==0 && s==0){
		start((m/5+11)%12);
	} else {
		start((m/5)%12);
	}
	if(m==0 && s==0){
		start(h);
	} else{ 
		start((h+1)%12);
	}
	if(F==0 || S==0){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}