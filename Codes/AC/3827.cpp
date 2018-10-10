
#include <bits/stdc++.h>
#define sd(n) 		scanf("%d",&n)
#define sld(n) 		scanf("%lld",&n)
#define pd(n) 		printf("%d\n",n)
#define pld(n) 		printf("%lld\n",n)
#define pb          push_back
#define mp          make_pair
#define F           first
#define S           second
#define test int t; sd(t);while(t--)

#define MAXI 		(int)1e3+10


typedef  long long ll;

using namespace std;

int main(){
	string s; cin >> s;

	ll kb=0,ks=0,kc=0;

	for(int i=0;i<s.length();i++){
		if(s[i]=='B')kb++;
		else if(s[i]=='S')ks++;
		else kc++;
	}


	ll rb,rs,rc;

	cin >> rb >> rs >> rc;

	ll pb,ps,pc;

	cin >> pb >> ps >> pc;

	ll r; cin >> r;

	
	ll low=0,high=1e15L,ans=0;




	while(low<=high){

		ll mid=low+(high-low)/2;

		ll required=max(0LL,mid*kb-rb)*pb + max(0LL,mid*ks-rs)*ps + max(0LL,mid*kc-rc)*pc;

		if(required<=r){
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}

	cout << ans << endl;

	return 0;
}