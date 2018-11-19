/*
 * test.cpp
 *
 *
 *      Author: Fireworks
 */

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<iomanip>
#include<fstream>
#include<bitset>
#include<cstring>
#include<cstdlib>
#include<complex>
#include<list>
#include<sstream>

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,long long> il;
typedef pair<long long,long long> ll;
typedef pair<ll,int> lli;
typedef pair<long long,int> li;
typedef pair<double,double> dd;
typedef pair<ii,int> iii;
typedef pair<double,int> di;
long long mod = 1000000007LL;
long long base = 10000007;
long long large = 1000000000000000000LL;



int n,k;
vector<int> a;
vector<vector<long long> > dp;
vector<long long> cnt;
int lb,rb;
long long acc=0LL;

void maintain(int l,int r){
	while(lb>l){
		lb--;
		acc+=cnt[a[lb]];
		cnt[a[lb]]++;
	}
	while(rb<r){
		rb++;
		acc+=cnt[a[rb]];
		cnt[a[rb]]++;
	}
	while(lb<l){
		cnt[a[lb]]--;
		acc-=cnt[a[lb]];
		lb++;
	}
	while(rb>r){
		cnt[a[rb]]--;
		acc-=cnt[a[rb]];
		rb--;
	}

}

void compute(int k,int l,int r,int optl,int optr){
	if(l>r) return ;
	int m = (l+r)/2;
	dp[m][k] = min(dp[m][k-1],dp[m][k]);
	int p = m;
	for(int i = max(optl,1);i<=min(m,optr);i++){
		maintain(i,m);
		if(dp[m][k] > dp[i-1][k-1]+acc){
			dp[m][k] = dp[i-1][k-1]+acc;
			p = i;
		}
	}

	if(l<r){
		compute(k,l,m,optl,p);
		compute(k,m+1,r,p,optr);
	}


}
int main(){
	cin>>n>>k;
	a.assign(n,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) a[i]--;
	dp.assign(n,vector<long long>(k,large));
	cnt.assign(n,0);
	lb=0;
	rb=-1;
	for(int j=0;j<k;j++){
		if(j==0){
			for(int i=0;i<n;i++){
				maintain(0,i);
				dp[i][j] = acc;
			}
		}else{
			compute(j,0,n-1,0,n-1);
		}
	}
	cout<<dp[n-1][k-1]<<endl;
	return 0;
}
