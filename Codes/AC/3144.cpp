#include <bits/stdc++.h>
using namespace std;


int main(){
	int N;cin>>N;
	int mt = 1e9;
	vector<int> nos(N);
	for(int i=0;i<N;i++){
		cin>>nos[i];
		mt = min(mt,nos[i]/N);
	}
	
	for(int i=0;i<N;i++) nos[i] -= mt * N;
	int t = 0;
	for(int n=0;n<2;n++){
		for(int i=0;i<N;i++){
			nos[i] -= t;
			if(nos[i] <= 0){
				cout<<i+1<<endl;
				return 0;
			}
			t += 1;
		}
	}
	return 0;
}