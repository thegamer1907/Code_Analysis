#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<iomanip>
#include<stdlib.h>
#include<cstdio>
#include<string>
#include<string.h>
#include<set>
#include<map>
using namespace std;

typedef long long ll;
typedef  pair<int,int> P;
const int INF = 0x7fffffff;
const int MAX_N = 1<<4+2;
const int MAX_V = 0;
const int MAX_M = 0;
const int MAX_Q = 0;

void show(string a, int val){
	cout<<a<<":       "<<val<<endl;
}

bool used[MAX_N];

int main(){
	int n, k;
	ios::sync_with_stdio(0);
	while(cin>>n>>k){
		memset(used, false, sizeof used);
		for(int i=0; i<n; i++){
			int tmp = 0;
			for(int j=0; j<k; j++){
				int t; cin>>t;
				tmp += t<<j;
			}
			used[tmp] = true;
		}
		if(used[0])
			cout<<"YES"<<endl;
		else{
			bool flag = false;
			for(int i=1; i<1<<k-1; i++){
				if(!used[i]) continue;
				for(int j=i+1; j<1<<k; j++)
					if(used[j]&&(i&j)==0 ){
						flag = true;
					}
			}
			
			if(flag) puts("YES");
			else puts("NO");
		}
	}
}