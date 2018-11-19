#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <math.h>
using namespace std;

string suf[211];
string pre[211];

int sz[211];
int n;
bitset<100> list[222][7];
string in;
int m;


string get_suf(string h){
	int nn=h.length();
	string ret="";
	for(int i=max(0,nn-6);i<nn;i++){
		ret += h[i];
	}
	return ret;
}
string get_pre(string h){
	int nn=h.length();
	string ret="";
	for(int i=0;i<min(6,nn);i++){
		ret += h[i];
	}
	return ret;
}

bitset<100> get_all(string h,int ln){
	int n=h.length();
	bitset<100> ret;
	for(int i=0;i<n-ln+1;i++){
		int bitmask=0;
		for(int j=0;j<ln;j++){
			bitmask<<=1;
			bitmask+= h[i+j]-'0';
		}
		ret[bitmask]=1;
	}
	return ret;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		string in;
		
		cin>>in;
		int l=in.length();
		for(int j=1;j<=6;j++){
			list[i][j]=get_all(in,j);
		}
		sz[i]=l;
		suf[i]=get_suf(in);
		pre[i]=get_pre(in);
	}
	cin>>m;
	for(int i=n+1;i<=n+m;i++){
		int a,b;
		cin>>a>>b;
		if(sz[a]<6){
			pre[i]=get_pre(pre[a]+pre[b]);
		} else {
			pre[i]=pre[a];
		}
		if(sz[b]<6){
			suf[i]=get_suf(suf[a]+suf[b]);
		} else {
			suf[i]=suf[b];
		}
		sz[i] = sz[a] + sz[b];
		if(sz[i] > 100)sz[i] = 100;


		for(int j=1;j<=6;j++){
			list[i][j] = list[a][j] | list[b][j] | get_all(suf[a] + pre[b],j);
		}
		bool found=false;
		for(int j=6;j>=1;j--){
			bool ok=true;
			for(int t=0;t<(1<<j);t++){
				if(!list[i][j][t]){
					ok=false;
					break;
				}
			}
			if(ok){
				found=true;
				cout<<j<<endl;
				break;
			}
		}
		if(!found){
			cout<<0<<endl;
		}
	}
}