#include <bits/stdc++.h>

using namespace std;

int arr[1000006];

int MAX = 10000007;

int sieve[10000007];
int val [10000007];

void build(){
	for(int i = 0; i<MAX; i++) sieve[i] = 1;
	for(int i = 0; i<MAX; i++) val[i] = 0;
	for(long long int i = 2; i<MAX; i++){
		if(sieve[i] == 1){
			long long int k = i*i;
			while(k<MAX){
				// cout<<k<<" "<<i<<endl;
				sieve[k] = i;
				k+=i;
			}
		}
	}
}

unordered_set<int> getFactors(int num){
	unordered_set<int> ans;
	while(sieve[num] != 1){
		// cout<<num<<" "<<sieve[num]<<endl;
		ans.insert(sieve[num]);
		num = num/sieve[num];
	}
	ans.insert(num);
	return ans;
}


int main(){
	int n;
	cin>>n;
	for(int i = 0; i<n; i++) scanf("%d", arr+i);
	build();
	unordered_map<int, int> count;
	for(int i = 0; i<n; i++){
		for(int f : getFactors(arr[i])){
			count[f]++;
		}
	}
	vector<pair<int, int> > values;
	for(auto x : count){
		val[x.first] = x.second;
	}
	for(int i = 1; i<MAX; i++){
		val[i] += val[i-1];
	}
	int m;
	cin>>m;
	for(int i = 0; i<m; i++){
		int l, r;
		scanf("%d %d", &l, &r);
		if(l>=MAX) l = MAX-1;
		if(r>=MAX) r = MAX-1;
		printf("%d\n", val[r] - val[l-1]);
	}
	return 0;
}