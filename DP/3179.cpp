#include <bits/stdc++.h>
using namespace std;


int main(){
	int N;cin>>N;
	int mt = 0, total = 0, limit = 1e9;
	for(int i=0;i<N;i++){
		int x;cin>>x;
		if(x <= limit) total += 1;
		else total = 1;
		limit = 2 * x;
		mt = max(mt,total);
	}
	cout<<mt<<endl;
}