#include <iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	int arr[n - 1];
	if(s[0] == s[1]){
		arr[0] = 1;
	}
	else{
		arr[0] = 0;
	}
	for(int i = 1; i < n - 1; i++){
		if(s[i] == s[i + 1]){
			arr[i] = arr[i - 1] + 1;
		}
		else{
			arr[i] = arr[i - 1];
		}
	}
	int m, a, b;
	cin>>m;
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		if(a - 2 < 0){
			cout<<arr[b - 2]<<endl;
			continue;
		}
		cout<<arr[b - 2] - arr[a - 2]<<endl;
	}
	return 0;
}
