//I_F_A
#include "bits/stdc++.h"
using namespace std;

int main(){
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	long long n;
	cin >> n;
	
	bool found = 0;
	
	string arr[n+1];
	for(long long i=1;i<=n;i++){
		
		cin >> arr[i];
		if(arr[i] == s){
				
			found = 1;
		}
	}
	
	if(found == 1){
		
		cout << "YES\n";
	}
	else{
		
		long long counter1 = 0 , counter2  = 0;
		long long found1 = 0 , found2 = 0;
		for(long long i=1;i<=n;i++){
			
			if(arr[i][0] == s[1]){
				found2 = i;
				counter2++;
			}
			if(arr[i][1] == s[0]){
				counter1++;
				found1 = i;
			}
		}
		
		 if(counter1 > 0 && counter2 > 0){
			
			cout << "YES\n";
		}
		else{
			
			cout << "NO\n";
		}
	}
}