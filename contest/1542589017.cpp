											
#include<bits/stdc++.h>							
#define ll long long							
#define dd double								
#define ull unsigned long long int			
#define sort(a) sort((a).begin(),(a).end());	
#define rev(a) reverse((a).begin(),(a).end());	
#define vec vector								
#define str string								
#define pb(a) push_back((a));					
#define ldd long double							
#define sz(x) x.size()							
#define mp make_pair							
#define F first										
#define S second									
#define E 2.7182818284590452353602874713526624977572
#define PI 3.141592653589793238462643383279502884197
using namespace std;	
ll gcd(int a, int b){												
	if (b == 0) return a;						
	return gcd(b, a%b);								
}													
ll fact(ll j){													
	ll a = 1;									
	for (ll i = 1; i <= j; i++)					
		a *= i;										
	return a;									
}													
ll sum2(ll c){													
	ll s = 0;									
	while (c != 0)									
	{											
		s += (c % 10)*(c % 10);					
		c /= 10;								
	}											
	return s;								
}											
bool prime(ll a){												
	if (a == 0 || a == 1) return false;			
	for (int i = 2; i <= sqrt(a); i++)			
		if (a%i == 0) return false;				
	return true;									
}
ll NOK(ll a,ll b){
	return ((a*b)/gcd(a,b));
}
void comb(int n){
	//for(int i=0;i<=n;i++)s[i][i]=1,s[i][0]=1;	
	for(int i=2;i<=n;i++){
		for(int j=0;j<=i;j++){
	//		s[i][j]=s[i-1][j]+s[i-1][j-1];
		}
	}
}

int main(){
	string s,k[110];
	long long n;
	cin>>s>>n;
	for(int i=1;i<=n;i++)cin>>k[i];
	for(int i=1;i<=n;i++){
		if(k[i]==s){
			cout<<"YES";
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(k[i][1]==s[0]&&k[j][0]==s[1]){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}













