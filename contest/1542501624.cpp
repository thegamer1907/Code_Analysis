#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getMin(vector<int> a, vector<int> b){
	int x=0,y=0;
	for(int i=0;i<a.size();i++){
		if(a[i]>0) x += a[i];
		if(b[i]>0) y += b[i];
	}
	if(x>=y) return b;
	else return a;
}

vector<int> sumVec(vector<int> a, vector<int> b){
	for(int i=0;i<a.size();i++){
		a[i]+=b[i];
	}
	return a;
}
int isValid(vector<int> a){
	for(int i=0;i<a.size();i++){
		if(a[i]>0) return 0;
	}
	return 1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,K,i;
	cin>>N>>K;
	vector<vector<int> > A(N); 
	vector<int> t(N);
	for(i=0;i<N;i++){
		vector<int> temp(K);
		int x = 0;
		for(int j=0;j<K;j++){
			cin>>temp[j];
			x *= 2;
			x += temp[j];
			if(temp[j]==0) temp[j]=-1;
		} 
		A[i]=temp;
		t[i] = x;
	}
	vector<int> x = A[0];
	int flag = 0;
	if(isValid(x)) flag=1;
	for(i=1;i<N;i++){
		vector<int> temp = sumVec(x,A[i]);
		x = getMin(temp,getMin(x,A[i]));
		if(isValid(x)) {flag=1;break;}
	}
	if(flag==0){
		unordered_map <int,int> m;
		for(i=0;i<N;i++){
			int x = t[i] ^ ((int)pow(2,K)-1);
			if(m.find(x)!=m.end()) {flag=1;break;}
			m.insert({t[i],1});
		}
	}
	if(flag==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
