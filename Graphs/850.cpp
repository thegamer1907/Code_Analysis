#include<bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;
ll n, t;
ll a[100500];
int main(){
cin >> n >> t;
for(int i=1;i<n;i++){
	cin >> a[i];
}
int i;
for(i=1;i<n;i+=a[i]){
	if(i == t){
		cout << "YES";
		return 0;
	}
	else if(i > t){
		cout << "NO";
		return 0;
	}
}
if(i == t || i + a[i] == t){
	cout << "YES";
	return 0;
}
cout << "NO";
return 0;
}
