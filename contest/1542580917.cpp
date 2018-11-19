#include <bits/stdc++.h>
using namespace std;

int arr[100005][5];

int sums [100005];

unordered_set <int> values;

int main(){
	int n, k;
	cin>>n>>k;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<k; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		int s = 0;
		for(int j = 0; j<k; j++){
			s += arr[i][j] * pow(2, j);
		}
		values.insert(s);
		sums[i] = s;
	}
	for(int i = 0; i<n; i++){
		vector<int> poss;
		if(sums[i] == 0){
			cout<<"YES"<<endl;
			return 0;
		}
		int alias = sums[i];
		// cout<<alias<<endl;
		for(int i = 0; i<16; i++){
			if((alias&i) == 0) poss.push_back(i);
			// cout<<(alias&i)<<" "<<i<<endl;
		}
		// for(int jk : poss) cout<<jk<<" ";
		// cout<<endl;
		for(int a : poss){
			if(values.find(a) != values.end()){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}