//							be name khoda
//					davoooooooooooooooooooooooooooooooooooooooooood

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll base=196613,maxn=1e6+9,mod=1e9+7;
string s;
ll n,b[maxn],h[maxn],l1,r1;
void build(){
	b[0] = 1 ;
	h[0]=s[0];
	for(int i=1 ; i <n ; i++){
	//	b[i] = (b[i-1] * base)%mod  ;
		h[i] = ((h[i-1] * base )%mod+ s[i]) %mod;
	}
	for(int i = 1 ; i < maxn ; i++)
		b[i] = (b[i - 1] * base) % mod ; 
}
ll gethash(int l , int r){ 
	if(l-1>=0)
		return (mod+h[r] - (h[l-1] * b[r-l+1])%mod)%mod ;
	else
		return (h[r]+mod)%mod; 
	}
bool ch(ll a){
	for(int i=1;i<n-a;i++)
		if(gethash(i,i+a-1)==gethash(0,a-1))
			return 1;
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	cout << fixed << setprecision(2);
	cin>>s;
	n = (int)s.size();
	build();
	for(int mid = n - 1 ; mid >= 1 ; mid--){
		if(gethash(0,mid - 1)==gethash(n-mid,n-1) && ch(mid)){
			for(int j=0;j<mid;j++)
				cout<<s[j];
			return 0;
		}
	}
	cout<<"Just a legend";
}
