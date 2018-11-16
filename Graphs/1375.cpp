#include<iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <queue>
#include <set>
#include<iomanip>
#include<map>
 
using namespace std;
 
#define SWS ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ft first
#define sd second
 
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int> pairt;
 
const int Z = 3 * (int)1e3 + 111;
const int N = 3 * (int)1e5 + 111;
const int INF = (int)1e9 + 111;
const int MOD = (int)1e9 + 7;
 
 vector<vi> gr(N);
 bool used[N],f(0);
 int n, tar;
 
void dfs(int a)
{
	used[a]= 1;
	
	if (a == tar) f = 1;
	for(int i = 0; i < gr[a].size();i++)
		if (used[gr[a][i]] == 0)
		  dfs(gr[a][i]);
		
		
	
}

int main()
{
   
    SWS;
   
    
    cin >> n >> tar;
    
    for(int i = 1; i <= n-1; i++)
    {
    	int x;
    	cin >> x;
    	gr[i].pb(i+x);
	}
	
	dfs(1);
	
	if (f == 1) cout << "YES";
	else cout << "NO";
    
}