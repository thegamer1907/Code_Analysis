#include <bits/stdc++.h>
using namespace std;
long long fastexpo(long long a, long long b) {
	long long fact = 1;
	while(b){
		if (b&1) fact *= a;
		
		a*=a;
		b>>=1;
	}
	return fact%1000000007;
}
int n, k, kchan, answer;
string s;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>s>>n;
	int PD[s.size()+1];
		for(int j = 1; j<s.size()+1; j++){
			if(s[j] == s[j-1])PD[j] = PD[j-1]+1;
			else PD[j] = PD[j-1];
			}
	for(int i = 0; i<n;i++){
		cin>>k>>kchan;
		answer = PD[kchan-1]-PD[k-1];
		cout<<answer<<"\n";
		answer = 0;
	}
}
/*
0 1 2 3 4 5  6  7  8  9  10
1 1 2 3 5 8	13 21 34 55  89
0 1 3 
*/