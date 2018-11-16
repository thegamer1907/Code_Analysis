#include<algorithm>
#include<clocale>
#include<cmath>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<iostream>
#include<istream>
#include<map>
#include<math.h>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
int n,p[10010],a[10010],father[10010],ans;
vector<int> child[10010];
void dfs(int x){
	for (int i=0;i<child[x].size();i++){
		int c=child[x][i];
		if (father[c]!=a[c]) ans++;
		for (int j=0;j<child[c].size();j++) father[child[c][j]]=a[c];
		dfs(c);
	}
}
int main(){
	cin>>n;
	for (int i=0;i<n-1;i++) cin>>p[i];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=0;i<n-1;i++) child[p[i]].push_back(i+2);
	child[0].push_back(1);
	dfs(0);
	cout<<ans<<endl;
	return 0;
}
