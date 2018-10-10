#include<bits/stdc++.h>
#define int long long
using namespace std;


vector<int> arr;

signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int k;
	cin>>k;
	arr.push_back(1);

	for(register int i=10;i<=100000000;i++){
		register int sum = 0;
		register int t = i;
		while(t){
			sum += t%10;
			t/=10;
		}
		if(sum == 10)arr.push_back(i);

		if(arr.size() > 10005)break;
	}
	cout<<arr[k]<<endl;

	return 0;
}
