#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define N 100005

string arr[105];

int main(){
	ios::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	string q, s; cin>>q;
	int n; cin>>n;
	int i, j;
	for(i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == q){
			cout<<"YES";
			return 0;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(arr[i][0] == q[1] && arr[j][1] == q[0]){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}