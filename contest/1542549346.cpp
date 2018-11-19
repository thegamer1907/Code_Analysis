#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<math.h>
#include<cassert>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<ctime>
#include<queue>
#include<stack>
#include<set>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<bitset>
#include<valarray>
#include<iterator>
#include<list>
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define S second
#define ld long double
#define F first
#define y1 LOL
#define ld long double
#define pb push_back
#define len length
#define sz size
#define beg begin
const ll INF = (ll)1e18 + 123;
const int inf=(int)2e9 + 123; 
const int mod=1e9+7;
using namespace std;
string s[211], f[211], l[211];
bool is[11][211][(1 << 10) + 11];
int n, m;
int get(int x){
	if(x == 0)
		return 0;
	int mx = 0;
	for(int i = 0; i <= 10; i ++){
		if((x & (1 << i)))
			mx = i;
	}
	return mx;
}
int main(){
	unsigned int FOR;
 	asm("rdtsc" : "=A"(FOR));
  	srand(FOR);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//cout.tie(0);
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> s[i];
		for(int j = 0; j < s[i].sz(); j ++){
			int cnt = 0;
			for(int k = j; k < min((int)s[i].sz(), j + 9); k ++){
				cnt *= 2;
				cnt += s[i][k] - '0';
				is[k - j + 1][i][cnt] = 1;
			}
			if(j < 9)
				f[i] += s[i][j];
			if(j >= (int)s[i].sz() - 9)
				l[i] += s[i][j];
		}
//		cout << i << ": " << f[i] << " - " << l[i] << endl;
	}
//	cout << "F " << is[1][1][1] << endl;
	cin >> m;
	for(int i = n + 1; i <= n + m; i ++){
		int a, b;
		cin >> a >> b;
		for(int ln = 1; ln <= 9; ln ++){
			for(int j = 0; j <= (1 << (ln + 1)) - 1; j ++)
				is[ln][i][j] = is[ln][a][j] | is[ln][b][j];
		}
		for(int j = 0; j < l[a].sz(); j ++){
			for(int k = 0; k < f[b].sz(); k ++){
				if(k + 1 + ((int)l[a].sz()) - j <= 9){
					int cnt = 0, ln = k + 1 + ((int)l[a].sz()) - j;
					for(int r = j; r < l[a].sz(); r ++){
						cnt *= 2;
						cnt += l[a][r] - '0';
					}
					for(int r = 0; r <= k; r ++){
						cnt *= 2;
						cnt += f[b][r] - '0';
					}
					is[ln][i][cnt] = 1;
				}
			}
		}
		if(l[a].sz() < 9 || f[b].sz() < 9){
			string x;
			if(l[a].sz() >= 9){
				f[i] = f[a];
				x = l[a] + f[b];
				for(int j = x.sz() - 1; j >= max(0, (int)x.sz() - 9); j --){
					l[i] = x[j] + l[i];
				}
			}else
			if(f[b].sz() >= 9){
				l[i] = l[b];
				x = l[a] + f[b];
				for(int j = 0; j < min((int)x.sz(), 9); j ++){
					f[i] += x[j];
				}
			}else{
				x = l[a] + f[b];
				for(int j = 0; j < min((int)x.sz(), 9); j ++){
					f[i] += x[j];
				}
				for(int j = x.sz() - 1; j >= max(0, (int)x.sz() - 9); j --){
					l[i] = x[j] + l[i];
				}
			}
		}else{
			f[i] = f[a];
			l[i] = l[b];
		}
//		cout << i << ": " << f[i] << " - " << l[i] << endl;
		int mx = 0;
		for(int ln = 1; ln <= 9; ln ++){
			bool flag = 0;
			for(int j = 0; j < (1 << (ln)); j ++){
				if(!is[ln][i][j]){	   
					flag = 1;
				}	
			}
			if(flag == 0)
				mx = ln;
		}
		cout << mx << endl;	   
	}
	return 0;
}