#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> nums(10001, 1), primes;
vector<vector<int> > pfs(10001);

void seive(){
	for(int i=2; i<=10000; i++){
		if(nums[i]==0){
			continue;
		}
		primes.push_back(i);
		pfs[i].push_back(i);
		for(int j=2*i; j<=10000; j+=i){
			nums[j] = 0;
			pfs[j].push_back(i);
		}
	}
}
vector<int> vals(10000001, 0);
int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin>>a[i];
    	int tmp = a[i];
    	for(int j:primes){
    		if(j*j>tmp){
    			break;
			}
			if(tmp%j!=0){
				continue;
			}
			while(tmp%j==0){
				tmp/=j;
			}
			vals[j]++;
		}
		if(tmp!=1){
			vals[tmp]++;
		}
	}
	vector<int> vals1(10000001, 0);
	vals1[2] = vals[2];
	for(int i=0; i<=10000000; i++){
		vals1[i] = vals1[i-1]+vals[i];
	}
	int m;
	cin>>m;
	while(m--){
		int l, r;
		cin>>l>>r;
		if(l>1e7){
			cout<<"0\n";
			continue;
		}
		r = min(r,(int) 1e7);
		int tmp= vals1[r]-vals1[l-1];
		cout<<tmp<<'\n';
	}
	return 0;
}