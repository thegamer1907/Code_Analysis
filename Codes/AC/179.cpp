#include <bits/stdc++.h>

using namespace std;
#define inf 1000000000
#define unvisited -1
#define visited 1
#define eps 1e-9
#define mp make_pair
#define pb push_back
#define pi acos(-1.0)
#define uint64 unsigned long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
	int n,i,j;
	
	vi a;
	scanf("%d",&n);
	int end = 0, start = 1;
	for(i=0;i<n;i++) {
		int bil;
		scanf("%d",&bil);
		// printf("bil :%d\n",bil);
		end = start + bil - 1;
		a.pb(start); a.pb(end);
		start = end+1;
	}

	// for(i=0;i<a.size();i++) {
	// 	if(i){printf(" ");}
	// 	printf("%d",a[i]);
	// }
	// printf("\n");
	int m;
	scanf("%d",&m);
	while(m--) {
		int angka;
		scanf("%d",&angka);
		int idx = lower_bound(a.begin(), a.end(), angka) - a.begin();
		int ans = idx/2 + 1;
		printf("%d\n",ans);
	}
	return 0;
};