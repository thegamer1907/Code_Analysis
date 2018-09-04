#include <bits/stdc++.h>

using namespace std;

#define MAX 10000001

typedef long long lli;

bool v[MAX];
int len, sp[MAX];

int resp[MAX];
int usado[MAX];
int query[MAX];

vector <int> primos;

void Sieve(){
	primos.push_back(2);
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (lli i = 3; i < MAX; i += 2){
		if (!v[i]){
			primos.push_back(i);
			sp[i] = i;
			for (lli j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main(){

	Sieve();
	
	int n;

	scanf("%d", &n);

	memset(usado,-1,sizeof(usado));

	for(int i = 0; i < n; i++){
		int val;
		scanf("%d", &val);
			
		while(val > 1){
			if(usado[sp[val]] != i){
				resp[sp[val]]++;
				usado[sp[val]] = i;
			} 
			
			val /= sp[val];
		}
	}

	int q;

	scanf("%d", &q);

	int j = 0;

	int atual = primos[j];

	for(int i = 1; i < MAX; i++){
		if(i == atual){
			query[i] += resp[atual];
			j++;
			if(j < primos.size()) atual = primos[j];
		}
		query[i] += query[i-1];
	}

	while(q--){
		int l,r;

		scanf("%d %d", &l, &r);

		if(l > 9999991){
			printf("0\n");
			continue;
		}

		int ans = 0;

		r = min(r,9999991);

		printf("%d\n",query[r] - query[l-1]);

	}


    return 0;
}