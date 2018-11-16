#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <stack>
#include <queue>
#include <cstdio>
#include <cctype>
#include <bitset>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#define fuck(x) cout<<"["<<x<<"]";
#define FIN freopen("input.txt","r",stdin);
#define FOUT freopen("output.txt","w+",stdout);
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int maxn = 1e5+5;
int f[maxn];
int main(){
#ifndef ONLINE_JUDGE
	FIN
#endif
	int n,t;
	while(cin>>n>>t){
		memset(f,0,sizeof(f));
		for(int i=1;i<n;i++){
			int x;
			cin>>x;
			f[i]=i+x;
		}
		int flag=0;
		int tt=1;
		while(tt<n){
			tt=f[tt];
			if(tt==t){
				flag=1;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}