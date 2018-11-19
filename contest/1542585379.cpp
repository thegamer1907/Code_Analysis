#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int K, n, k, f[1000];
int read(){
	int p=0;
	char ch=getchar();
	while (ch<'0' || ch>'9') ch=getchar();
	while (ch>='0' && ch<='9') p=p*10+ch-'0', ch=getchar();
	return p;
}
int dfs(int x){
	int p=0;
	if (f[x]) return 1;
	for (int j=0;j<k;j++)
		if (x&(1<<j)) p|=dfs(x^(1<<j));
	return p;
}
int main(){
	cin>>n>>k;
	for (int i=0;i<k;i++) K+=1<<i;
	for (int i=1;i<=n;i++){
		int p=0;
		for (int j=1;j<=k;j++) p=p*2+read();
		f[p]=1;
	}
	if (f[0]){
		cout<<"YES"<<endl;
		return 0;
	}
	for (int i=1;i<=K;i++)
		if (f[i] && dfs(i^K)){
			cout<<"YES"<<endl;
			return 0;
		}
	cout<<"NO"<<endl;
	return 0;
}
