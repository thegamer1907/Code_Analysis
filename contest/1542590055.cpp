#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d", &x)
#define slld(x) scanf("%lld", &x)
#define pb push_back
#define ll long long
#define mp make_pair

int main() {
	bool flag = false;
	string s;
	cin>>s;
	char c1 = s[0];
	char c2 = s[1];
	int t;
	sd(t);
	string arr[t];
	for(int i=0; i<t; i++){
		cin>>arr[i];
		if(arr[i]==s){
			flag=true;
		}
	}
	int z=0;
	for(int i=0; i<t; i++){
		if(c1==arr[i][1]){
			z=1;
			break;
		}
	}
	if(z){
		for(int i=0; i<t; i++){
			if(c2==arr[i][0]){
				flag=true;
				break;
			}
		}
	}
	
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}