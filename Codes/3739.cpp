#include <bits/stdc++.h>

using namespace std;

typedef long long int	lli;

const lli N = (lli) 1e13;
const int M = 1000;
lli cnt[M];
lli nb, ns, nc, pb, ps, pc, r;
	
bool canMake(lli amount){
	lli qtb = 0LL, qts = 0LL, qtc = 0LL;
	
	qtb = max(amount * cnt['B'] - nb, qtb);
	qts = max(amount * cnt['S'] - ns, qts);
	qtc = max(amount * cnt['C'] - nc, qtc);
	
	lli total = pb * qtb + ps * qts + pc * qtc;
	
	return total <= r;
}

int main (){
	string s;
	
	ios::sync_with_stdio(false);
	
	cin >> s;
	
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	
	for(int i = 0 ; i < s.length() ; i++){
		cnt[s[i]]++;
	}
	
	lli ini = 0LL, fim = N;
	lli resp = 0LL;
	
	while(ini <= fim){
		//cout << ini << ' ' << fim << '\n';
		
		lli mid = (ini + fim) / 2LL;
		
		if(canMake(mid)){
			resp = max(resp, mid);
			
			ini = mid + 1LL;
		}else{
			fim = mid - 1LL;
		}
	}

	cout << resp << '\n';
	
	return 0;
}
