#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main(){
	int n,t;
	int cnt=0;
	int a[30010];
	cin>>n>>t;
	for(int i=1;i<=n-1;i++){
		cin>>a[i];
	}
	int b=1;
	arr.push_back(1);
	for(int i=1;i<=n-1;i++){
		if(i==b){
			b=b+a[i];
			arr.push_back(b);
		}
	}
	for(int i=0;i<arr.size();i++){
		if(arr[i]==t){
			cnt=1;
			break;
		}
	}
	if(cnt==1){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}