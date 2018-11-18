#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(i=0;i<n;i++)
typedef long long int Int;
Int get(){
	Int temp;
	cin>>temp;
	return temp;
}

int main(){
	string P,temp;
	cin>>P;
	Int i,flag=0,n=get();
	vector<string> S;
	FOR(i,n){
		cin>>temp;
		if(temp==P){
			cout<<"YES";
			return 0;
		}
		if(temp[1]==P[0]){
			flag=1;
		}
		S.push_back(temp);
	}
	if(flag==0){
		cout<<"NO";
		return 0;
	}
	FOR(i,n){
		temp=S[i];
		if(temp[0]==P[1]){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
