#include<bits/stdc++.h>

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define sc(a) scanf("%c", &a)
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define siii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define sl(a) scanf("%I64d", &a)
#define sll(a, b) scanf("%I64d%I64d", &a, &b)
#define slll(a, b, c) scanf("%I64d%I64d%I64d", &a, &b, &c)
#define pi(a) printf("%d\n", a)
#define pii(a, b) printf("%d %d\n", a, b)
#define piii(a, b, c) printf("%d %d %d\n", a, b, c)
#define bye exit(0)

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;

const int TAM = 10000000 + 15;
const ll MOD = 1000000007LL;

int b[TAM+5], f[TAM+5], a, n, m, l, r, p[TAM+5], t[TAM+5];

int main(){

	b[1] = 1;
	f[1] = -1;

	for(ll i=2LL; i<1LL*TAM; i++){
		if(b[i]==0){
			for(ll j=i*i; j<1LL*TAM; j+=i){
				b[j] = 1;
				f[j] = i;
			}
		}	
	}

	for(int i=2; i<TAM; i++){
		if(!b[i]) f[i] = i;
	}

	si(n);
	for(int i=0; i<n; i++){
		si(a);
		while(a!=1){
			//pii(a, f[a]);
			if(!b[a]){p[f[a]]++; break;}
			else{
				int d = f[a];
				p[d]++;
				//pii(a, f[a]);
				while(a!=1 && a%d==0 ){
					//pii(a, f[a]);
					a = a/d;
				}
				//pii(a, f[a]);
			}
		}
	}
	/*
	for(int i=1; i<20; i++) cout << p[i] << " ";
	puts("");
	*/
	t[0] = 0;
	t[1] = 0;
	for(int i=2; i<TAM; i++){
		if(!b[i]) t[i] = t[i-1] + p[i];
		else t[i] = t[i-1];
	}	

	si(m);
	for(int i=0; i<m; i++){
		sii(l, r);
		cout << t[min(r, 10000000)] - t[ min(l, 10000000) -1] << endl;
	}

	return 0;
}
