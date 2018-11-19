#include <bits/stdc++.h>
using namespace std;
set<int> st;
int N, K;
int main(){
	scanf("%d %d", &N, &K);
	for(int i = 0; i < N; i++){
		int s = 0, d;
		for(int j = 0; j < K; j++){
			scanf("%d", &d);
			if(d)s |= (1 << j);
		}
		if(!s){
			puts("YES");
			return 0;
		}
		st.insert(s);
	}
	for(auto &x : st){
		for(auto &y : st){
			if(!(x & y)){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}