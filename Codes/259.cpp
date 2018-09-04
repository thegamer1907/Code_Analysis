#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int vet[1000100];

int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	int cnt = 1;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		for(int j = cnt; j < cnt + x; j++){
			vet[j] = i + 1;
		}
		cnt += x;
	}
	
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		int x;
		cin >> x;
		cout << vet[x] << endl;
	}
	
	
	return 0;
}
