#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin >> n;
	ll a[n],b[n],c[n];
	ll i,s=0,s1=0,s2=0,s3=0;
	for(i=0;i<n;i++){
			cin >> a[i]>>b[i]>>c[i];
			s1 = s1 + a[i];
			s2 = s2 + b[i];
			s3 = s3 + c[i];
	}

	
	if(s1 == 0 && s2==0 && s3==0){
		cout << "YES";
	}
	
	else{
		cout << "NO";
	}
	
}
