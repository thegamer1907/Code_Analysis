//Problem Password - http://codeforces.com/contest/126/problem/
#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie
using namespace std;

/*struct HashP{

	Long b,m,n;
	vector<Long> acum,bexp;

	Long valor(char c){
		if(c >='A' && c <= 'Z') return c-'A';
		return c-'a'+26;
	}

	HashP(Long B,Long M,string &S) : b(B) , m(M) , n(S.size()) , acum(S.size()) , bexp(S.size()) {

		bexp[0] = 1LL;
		for(int i = 1 ; i < n ; i ++){
			__int128 aux = __int128(bexp[i-1])*__int128(b); 
			 aux %= __int128(m);
			 bexp[i] = aux;
		}

		__int128 act = 0;
		for(int i = 0 ; i < n ; i++){
			act = (act*__int128(b))%__int128(m);
			act = (act + __int128(valor(S[i])))%__int128(m);
			acum[i] = act;			
		}

	}

	Long valor(int izq , int der){
		if(!izq) return acum[der];
		int dist = der-izq+1;
		__int128 aux = (__int128(acum[izq-1])*__int128(bexp[dist]))%__int128(m);
		aux = (__int128(m) + __int128(acum[der]) - aux)%__int128(m);
		return aux;
	}

};*/

int main(){

	string s;
	optimizar_io(0);

	cin >> s;
	int N = s.size();
	
	vector<int>fe(N+1),veces(N);	
	fe[0] = -1;	
	int ultimo = -1;
	for(int i = 0 ; i < N ; ){
		while(~ultimo && s[ultimo] != s[i])
			ultimo = fe[ultimo];
		fe[++i] = ++ultimo;			
	}	

	int pos = N;
	while(pos){		
		pos = fe[pos];
		veces[pos]++;
	}
	for(int i = 1 ; i < N ; i ++)
		if(veces[fe[i]]) veces[fe[i]]++;
	int mejor = 0;
	for(int i = 0 ; i < N ; i ++)
		if(veces[i] > 1 ) mejor = i;
	
	if(mejor > 0 )
		for(int i = 0 ; i < mejor ; i ++) cout << s[i];
	else cout << "Just a legend";
	cout << '\n';
	

	return 0;
}	