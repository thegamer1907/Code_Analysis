#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll v[100009];

int main(){
	int n,a,b;
	string str;
	cin >>str;
	cin >>n ;
	for(int i = 0;i<str.size()-1;i++){
		v[i+1] = v[i];
		if(str[i] == str[i+1]) v[i+1]++;
	}
	while(n--){
		cin >>a >>b;a--;b--;
		cout<<(v[b]-v[a])<<"\n";
	
	}
	
	
}