#include <bits/stdc++.h>

using namespace std;
typedef long long Long;


struct Bucket {
	vector<int> F;
	vector<int> V;
	Long ans = 0, t = 0, h=-1;
	Bucket(vector<int> V = vector<int>(1,0)):V(V.begin(),V.end()){
		int MAXN = *max_element(V.begin(), V.end());
		F = vector<int>(MAXN+1);
	}
	void adjust(int i, int j){
		while(h < j)add(V[++h]);
		while(t > i)add(V[--t]);
		while(h > j)rem(V[h--]);
		while(t < i)rem(V[t++]);
	}
	void add(int n){
		ans += F[n];
		F[n]++;
	}
	void rem(int n){
		F[n]--;
		ans -= F[n];
	}
};

Long ANS[21][100010];
Bucket B;
void dnc(int k, int l, int r, int LO, int HI){
	if(r < l)return;
	int m = (l+r)/2;
	int bp = LO;
	Long ans = 1000000000000000000LL;
	for (int i = LO; i <= min(HI, m); ++i) {
		B.adjust(i, m);
		if(ans > B.ans + ANS[k-1][i-1]){
			ans = B.ans + ANS[k-1][i-1];
			bp = i;
		}
	}
	ANS[k][m] = ans;
	dnc(k, l, m-1,LO,bp);
	dnc(k, m+1,r, bp,HI);
}


int main(int argc, char *argv[]) {

	int N,K;
	scanf("%d%d", &N, &K);
	vector<int> V(N);
	for(int &v : V)
		scanf("%d", &v);
	B = Bucket(V);
	for (int i = 0; i < N; ++i) {
		B.adjust(0, i);
		ANS[0][i] = B.ans;
	}
	for (int i = 1; i < K; ++i) {
		dnc(i, i, N-1, i, N-1);
	}
	cout << ANS[K-1][N-1] << endl;
	
}
