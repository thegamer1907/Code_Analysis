											
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
int h,m,s;
int t1,t2;
int a,b,c;
bool ok(int l,int r){
	if(a>=l&&a<=r)return 0;
	if(b>=l&&b<=r)return 0;
	if(c>=l&&c<=r)return 0;
	return 1;
}
int main(){
	cin>>h>>m>>s>>t1>>t2;
	h%=12;
	t1%=12;
	t2%=12;
	a=h*30*120+m*60+s;
	b=m*6*120+s*12;
	c=s*6*120;
	t1*=120*30;
	t2*=120*30;
	if(t1<t2&&ok(t1,t2)){
		cout<<"YES";
		return 0;
	}
	if(t1<t2&&ok(0,t1)&&ok(t2,359*120)){
		cout<<"YES";
		return 0;
	}
	if(t2<t1&&ok(t2,t1)){
		cout<<"YES";
		return 0;
	}
	if(t2<t1&&ok(0,t2)&&ok(t1,359*120)){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}













