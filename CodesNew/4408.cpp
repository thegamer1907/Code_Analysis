#include <bits/stdc++.h>

using namespace std;
string str[500100];
bool ok(int start,int end,string a,string b){
	for(int i = start;i <= end;i++){
		if(a[i] != b[i])return false;
	}
	return true;
} 
string lcp(string a,string b){
	int low = 0,high = min(a.size(),b.size());
	string prefix = "";
	while(low <= high){
		int mid = (low+high)/2;
		if(ok(low,mid,a,b)){
			prefix += a.substr(low,mid-low+1);
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return prefix;
}
int main(){
	// ios_base::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	int idx = -1;
	string menor = "";
	for(int i = 0;i < n;i++)cin >> str[i];
	for(int i = n-1;i >= 0;i--){
		if(menor.empty())menor = str[i];
		if(str[i] > menor)str[i] = lcp(str[i],menor);
		if(str[i] < menor)menor = str[i];
	}
	for(int i = 0;i < n;i++){
		cout << str[i] << "\n";
	}
	return 0;
}