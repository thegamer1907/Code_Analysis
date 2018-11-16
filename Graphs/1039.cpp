#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false)
int arr[30001];
bool check(int k,int i){
	if (i+arr[i] > k) return false;
	else if(i+arr[i] == k) return true;
	else return check(k,i+arr[i]);
}

int main(){
	int n,des;
	cin >> n >> des;
	for(int i = 1; i < n;i++){
		cin >> arr[i];
	}
	if(check(des,1)) cout << "YES\n";
	else cout << "NO\n";
}