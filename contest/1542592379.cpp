#include <bits/stdc++.h>
using namespace std;

int main(){
	string t;
	cin >> t;
	int n;
	cin >> n;
	string arr[n];
	for(int i=0;i<n;i++){		
		cin >> arr[i];
		if(arr[i]==t){
			cout << "YES\n";
			return 0; 
		}
	}
	for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){
			string s="";
			s+=arr[i][1];
			s+=arr[j][0];
			//cout << s << endl;
			if(s==t){ 
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";

	return 0;
}