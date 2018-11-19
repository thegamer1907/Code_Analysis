/*
* @Author: wchhlbt
* @Last Modified time: 2017-10-05
*/
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define pb push_back
#define AA first
#define BB second
#define ONES(x) __builtin_popcount(x)
#define _  << "  " <<
using namespace std;

typedef long long ll ;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const double eps =1e-8;
const int mod = 1000000007;
const double PI = acos(-1.0);
inline int read(){ int num;    scanf("%d",&num);   return num;}
const int maxn = 207;

int w[20];

int main()
{
	int n = read();
	int k = read();
	for(int i = 1; i<=n; i++){
		int num = 0;
		for(int j = 1; j<=k; j++){
			int o = read();
			num *= 2;
			if(o)	num += 1;
		}
		w[num] = 1;
	}
	for(int i = 0; i<20; i++){
		if(w[i]){
			for(int j = 0; j<20; j++){
				if(w[j] && ((i&j)==0)){
					puts("YES");
					return 0;
				}
			}
		}
	}
	puts("NO");
    return 0;
}