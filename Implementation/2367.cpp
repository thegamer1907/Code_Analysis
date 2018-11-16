#include<bits/stdc++.h>
#define MAX 5002
#define pb push_back
#define For(i,s,e) for (int i=(s); i<(e); i++)
#define Debug_array(a,n) for (int i=(0); i<(n); i++) cout<<a[i]<<" "
#define Foe(i,s,e) for (int i=(s); i<=(e); i++)
#define Fod(i,s,e) for (int i=(s)-1; i>=(e); i--)
#define Mod 1000000007
#define pii pair<ll,ll>
#define fi first
#define se second

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	
	ll n;cin>>n;
	ll c = 0;
	while(n>0){
		ll dig = n%10;
		if(dig==4 || dig==7) c++;
		n = n/10;
	}
	if(c==0){
		cout<<"NO"<<endl;
		return 0;
	}

	bool flag = true;
	while(c>0){
		ll dig = c%10;
		if(dig!=4 && dig!=7){
			flag = false;
			break;
		}
		c = c/10;
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}