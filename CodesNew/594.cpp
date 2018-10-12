#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <time.h> 
#include <stack>

using namespace std;

const long long MAX=1e7;

int n;
int x[MAX+1];
int m;
int prime[MAX+1];
long long cnt[MAX+1];
long long P[MAX+1];

int main() {
	
	ios_base::sync_with_stdio(false);
	
	memset(x,0,sizeof(x));
	cin>>n;
	for (int i=1;i<=n;i++) {
		int y;
		cin>>y;
		x[y]++;
	}
	
	memset(prime,0,sizeof(prime));
	memset(cnt,0,sizeof(cnt));
	for (int i=2;i<=MAX;i++){
		if (prime[i]!=0) continue;
		for (int j=1;j*i<=MAX;j++) {
			prime[i*j]=1;
			cnt[i]+=x[i*j];
		}
	}
	
	memset(P,0,sizeof(P));
	for (int i=1;i<=MAX;i++) P[i]=P[i-1]+cnt[i];
	
	cin>>m;
	for (int i=1;i<=m;i++) {
		long long l,r;
		cin>>l>>r;
		l=min(l,MAX);
		r=min(r,MAX);
		cout<<P[r]-P[l-1]<<endl;
	}
	
	
	return 0;

}
