// http://codeforces.com/problemset/problem/489/B
#include <bits/stdc++.h>
using namespace std;
#define ll            int
#define si(i)         scanf("%d",&i)
#define sii(a,b)      scanf("%d%d",&a,&b)
#define siii(a,b,c)   scanf("%d%d%d",&a,&b,&c) 
#define sl(i)         scanf("%lld",&i)
#define pri(i)        printf("%d\n",i)
#define prl(i)        printf("%lld",i)
#define prs(s)        printf("%s",s)
#define pi            pair<int,int>
#define F             first
#define S             second
#define ss(s)         scanf("%s",s);
#define FOR(i,l,r)    for(ll i = l ; i < r ; i++)
#define RFOR(i,r,l)   for(ll i = r ; i >= l ; --i)
#define see(x)        cout << #x << " " << x << endl; 
#define umap          unordered_map<int,int>

int main(){
	int a,b;
	int arr[100],arr1[100];

	si(a);
	FOR(i,0,a) si(arr[i]);
	si(b);
	FOR(i,0,b) si(arr1[i]);
	sort(arr,arr+a);
	sort(arr1,arr1+b);
	// this making a bipartite graph.
	int cnt = 0 ;

	FOR(i,0,a)
	FOR(j,0,b)
	if(abs(arr[i]-arr1[j]) <= 1){
		cnt++;
		arr1[j] = INT_MAX;
		break;
	}
	pri(cnt);
}