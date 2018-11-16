#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<climits>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define si size()
#define fr front()
#define ba back()
#define tp top()

typedef long long int ll;
typedef long double ld;
typedef unsigned int ui;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef pair<pii,int> ppi;
typedef pair<int,pii> pip;
typedef pair<pii,pii> ppp;
typedef pair<double,double> pdd;
typedef pair<double,pdd> pddd;
typedef priority_queue<pii> PQp;

#define CASE() for(int Case=1;Case<=Tc;Case++)
#define iofast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int adj[8][2]={{-1,0},{0,-1},{1,0},{0,1},{-1,-1},{-1,1},{1,1},{1,-1}};
const ll LLINF=1e18;
const int INF=2e9;
const ll MOD=1e9+7;
const double EPS=1e-9;
const int SIZE=100005;

int N;
int A[SIZE];

int main (){
	
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d", &A[i]);
	}
	int ans=0;
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			int temp=0;
			for(int k=0;k<N;k++){
				if(k>=i && k<=j){
					if(A[k]==0) temp++;
				} else {
					if(A[k]==1) temp++;
				}
			}
			ans=max(ans,temp);
		}
	}
	printf("%d\n", ans);
	
	return 0;
}