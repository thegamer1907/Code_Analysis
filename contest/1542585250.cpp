#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<map>
#include<bitset>
#include<stack>
#include<vector>
#include<set>
using namespace std;
#define MAXN 1010
#define MAXM 1010
#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define eps 1e-8
int n,k;
bool has[40];
int main(){
	int i,j;
	int x,w;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		int x=0;
		for(j=1;j<=k;j++){
			scanf("%d",&w);
			x|=w<<j-1;
		}
		has[x]=1;
	}
	for(i=0;i<(1<<k);i++){
		for(j=0;j<(1<<k);j++){
			if(has[i]&&has[j]&&!(i&j)){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}

/*

*/
