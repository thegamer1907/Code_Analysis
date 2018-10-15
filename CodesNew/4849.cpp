#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=2e5+9;
int d[MAX];
string a,b ,c;
bool search(int mid){
	c=a;
	for(int i=0;i<mid;i++){
		c[d[i]-1]='0';
	}
	int j=0;
	for(int i=0;i<a.size();i++){
		if(c[i]==b[j])j++;
	}
	return j==b.size();
}
int main(){
	int i,j ,k;
	int n;
	cin>>a>>b;
	n=a.size();
	for(i=0;i<n;i++){
		cin>>d[i];
	}
	int l=0,h=n;
	while(h-l>1){
		int m=(l+h)/2;
		if(search(m)){
			l=m;
		}
		else
			h=m;
	}
	cout<<l;
}