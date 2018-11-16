#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ii pair<int,int> 
#define MOD 1000000007
#define FOR(i, n) for(ll i = 0; i < (ll)n; i++)
ll MIN(ll a, ll b){return (a < b) ? a:b;}
ll MAX(ll a, ll b){return (a > b) ? a:b;}
ll ABS(ll x){return (x > 0) ? x:-x;}
int MIN(int a, int b){return (a < b) ? a:b;}
int MAX(int a, int b){return (a > b) ? a:b;}
int ABS(int x){return (x > 0) ? x:-x;}
double MIN(double a, double b){return (a < b) ? a:b;}
double MAX(double a, double b){return (a > b) ? a:b;}
double ABS(double a, double b){return (a > 0) ? a:b;}
ll left(ll x){ return (x<<1);}
ll right(ll x){return (x<<1)+1;}
ll lsone(ll x){return (x&(-x));}

int n, p[300000], col[300000], ans = 1;
vector<int> c[300000];

int main(){
	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		scanf("%d", &p[i]);
		c[p[i]].push_back(i);
	}
	for(int i = 1; i <= n; i++){
		scanf("%d", &col[i]);
	}
	queue<int> list;
	list.push(1);
	while(!list.empty()){
		int top = list.front();
		list.pop();
		for(int i = 0; i < c[top].size(); i++){
			int child = c[top][i];
			if(col[child] == col[top]){
				
			}else{
				ans++;
			}
			list.push(c[top][i]);
		}
	}
	printf("%d\n", ans);
}
