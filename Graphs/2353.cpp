/*input
5
-1
1
2
1
-1

*/

// author : ShivamKD
#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const ll MOD = 1e9 + 7;

vector<int> vec[2010];
int in[2010],out[2010];
int answer = 0;

void dfs(int source,int level){
	answer = max(answer,level);

	for(int x : vec[source]){
		dfs(x,level+1);
	}
}

int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		int p;
		cin>>p;
		if(p!=-1){
			vec[p].push_back(i);
			in[i]++;
		}
	}

	for(int i = 1;i<=n;i++){
		if(!in[i]){
			//cout<<i<<" ";
			dfs(i,1);
		}
	}

	cout<<answer;
	return 0;
}