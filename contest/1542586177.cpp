#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <math.h>
using namespace std;

string in;

int m;
int n;

bool is_start[10101];

bool is_good(int l,int r){
	if(r-l+1 < 0)return false;
	if((r-l+1)%2==1)return false;
	for(int i=l;i<r;i+=2){
		if(!is_start[i])return false;
	}
	return true;
}
int main(){
	cin>>in;
	n=in.length();
	cin>>m;
	bool first=false,last=false;
	for(int i=0;i<m;i++){
		string tm;
		cin>>tm;
		if(tm[0] == in[n-1])last=true;
		if(tm[1] == in[0])first=true;
		for(int i=0;i<n-1;i++){
			if(tm[0]==in[i] && tm[1] ==in[i+1]){
				is_start[i]=true;
			}
		}
	}
	if(is_good(0,n-1)){
		cout<<"YES"<<endl;
		return 0;
	}
	if(first && is_good(1,n-1)){
		cout<<"YES"<<endl;
		return 0;
	}
	if(first && last && is_good(1,n-2)){
		cout<<"YES"<<endl;
		return 0;
	}
	if(last && is_good(0,n-2)){
		cout<<"YES"<<endl;
		return 0;
	}
	if(n==1 && (first || last)){
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
}