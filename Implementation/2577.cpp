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
const int maxn = 1005;
int a[maxn];
int main(){
#ifndef ONLINE_JUDGE
	FIN
#endif
	int n,h;
	while(cin>>n>>h){
		int ans=0; 
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>h){
				ans+=2;
			}else{
				ans++;
			}
		}
		cout<<ans<<endl;
	}

}