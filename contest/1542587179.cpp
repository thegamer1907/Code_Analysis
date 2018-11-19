#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <math.h>
using namespace std;


int rep[16];
int n;
int k;


int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int bit=0;
		for(int j=0;j<k;j++){
			bit*=2;
			int tm;
			cin>>tm;
			bit+=tm;
		}
		rep[bit]++;
	}
	bool ok=false;
	for(int i=0;i<(1<<k);i++){
		for(int j=0;j<(1<<k);j++){
			if(i==j)continue;
			if(rep[i]==0)continue;
			if(rep[j]==0)continue;
			if((i^j)!=i+j)continue;
			ok=true;
		}
	}
	if(ok || rep[0]){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
/*
string in;

int m;
int n;

bool is_start[10101];

bool is_good(int l,int r){

}
int main(){
	cin>>in;
	n=in.length();
	cin>>m;
	for(int i=0;i<m;i++){
		string tm;
		cin>>tm;

		for(int i=0;i<n-1;i++){
			if(tm[0]==in[i] && tm[1] ==in[i+1]){
				is_start[i]=true;
			}
		}
	}
}*/