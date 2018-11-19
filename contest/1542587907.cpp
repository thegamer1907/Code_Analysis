//	Mohib Manva
#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define LOCAL 0
#define pb push_back
#define ll long long

ll po(ll a,ll b){
	ll x = 1,y=a;
	while(b>0){
		if(b%2){
			x = x*y;
			x %= mod;
		}
		y=y*y;
		y%=mod;
		b/=2;
	}
	return x;
}

int main(){
	if(LOCAL){
    	freopen("C:/Users/gold/Desktop/sublime IO/input.txt","r",stdin);
    	freopen("C:/Users/gold/Desktop/sublime IO/output.txt","w",stdout);
	}
	int T = 1;
	//scanf("%d",&T);
	while(T--){
		string pass;
		cin>>pass;
		int n;
		cin>>n;
		bool res = 0;
		vector<string> vc;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			if(s == pass){
				res = true;
			} 
			vc.push_back(s);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				string now = vc[i] + vc[j];
				if(now.substr(1,2) == pass){
					res = true;
				}
			}
		}		
		puts(res?"YES":"NO");
	}
	return 0;	
}