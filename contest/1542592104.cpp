#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define MOD 1e9+7

int main(){
	string s,ts;
	cin >> s;
	int n;
	cin >> n;

	bool f1=false,f2=false,f3=false,f4=false;

	for(int i=0;i<n;i++){
		cin >> ts;
		if(ts == s){
			f1=true;f2=true;
		}
		else if(ts[1]==s[0] && ts[0]==s[1]){
			f1=true;f2=true;
		}
		else if(ts[1] == s[0]){
			f1=true;
		}
		else if(ts[0] == s[1]){
			f2=true;
		}


		if(ts == s){
			f3=true;f4=true;
		}
		else if(ts[0] == s[1]){
			f3=true;
		}
		else if(ts[1] == s[0]){
			f4=true;
		}


	}

	if((f1 && f2) || (f3 && f4))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;	
}