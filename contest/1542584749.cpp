#include <bits/stdc++.h>
using namespace std;
typedef long long               ll;
const int mod = 1e9+7;
#ifndef M_PI
const double M_PI = acos(-1.0);
#endif
int stat[100*10001][4];

int main(){
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; ++i){
		for(int j=0; j<k; ++j){
			scanf("%d", &stat[i][j]);
			stat[i][j] = !stat[i][j];
		}
	}
	bool res = false;
	vector<bool> mask(1<<k);
	for(int i=0; i<n; ++i){
		for(int j=0; j<1<<k; ++j){
			bool cur = true;
			for(int b=0; b<k; ++b){
				if((1<<b) & j && !stat[i][b]){
					cur = false;
				}
			}
			if(cur){
				mask[j] = true;
			}
		}
	}
	for(int i=0; i<1<<k; ++i){
		for(int j=0; j<1<<k; ++j){
			if(mask[i] && mask[j] && ((i|j) + 1) == 1<<k){
				res = true;
			}
		}
	}
	if(res){
		cout<<"YES\n";
	} else{
		cout<<"NO\n";
	}
	return 0;
}
