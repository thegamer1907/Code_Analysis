#include "bits/stdc++.h"
using namespace std;
int main(){
	string s;
	cin>>s;
	int i,l=s.length();
	int len0=0,len1=0,max0=0,max1=0;
	for(i=0;i<l;i++){
		if(s[i]=='0'){
			len0++;
			if(len1>max1)
				max1=len1;
			len1=0;
		}
		else{
			len1++;
			if(len0>max0)
				max0=len0;
			len0=0;
		}
	}
	if(len1>max1)
		max1=len1;
	if(len0>max0)
		max0=len0;
	if(max1>=7||max0>=7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}