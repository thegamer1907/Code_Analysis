#include <bits/stdc++.h>
using namespace std;
#define int long long

int a , b , c , na , nb , nc , pa , pb , pc , R;
string s;

int32_t main(){
	cin>>s;
	a = 0 , b = 0 , c=  0;
	for(int i = 0 ; i < s.size() ; i ++){
		if(s[i] == 'B') a++;
		if(s[i] == 'S') b++;
		if(s[i] == 'C') c++;
	}
	scanf("%lld%lld%lld" , &na , &nb , &nc);
	scanf("%lld%lld%lld" , &pa , &pb , &pc);
	scanf("%lld" , &R);
	int l = 0, r = (int) 1e13;
	int ansj = -1;
	while(l<=r){
		int mid = (l+r) / 2;
		int xa , xb , xc;
		xa = a*mid , xb=b*mid , xc = c*mid;
		xa -= na , xb-= nb , xc -= nc;
		xa = max(xa , 0LL ) , xb = max(xb , 0LL) , xc = max(xc , 0LL);
		int k = xa*pa  + xb*pb + xc*pc;
		if(k <= R){
			ansj = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	printf("%lld\n" , ansj);	
}