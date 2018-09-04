#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const ll oo = 1e18;
const int mod = 1e9+7;

int f[10*N];
bool v[10*N];

int main(){
	string s;
	cin>>s;
	int n = s.length();
	int j=0;
	for(int i=1;i<n;i++){
		while(j && s[i]!=s[j])
			j = f[j-1];
		if(s[i] == s[j])
			j++;
		if(i<n-1)
			v[j]=1;
		f[i]=j;
	}
	v[0]=1;
	j=f[n-1];
	while(j && !v[j])
		j = f[j-1];
	if(j){
		cout << s.substr(0,j) << endl;
	}else{
		puts("Just a legend");
	}
}