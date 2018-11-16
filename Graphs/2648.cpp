#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<vector>
#include<math.h>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
const int inf = 0x3f3f3f3f;
int n;
int a[10005];
int fa[10005];
int find (int x){
	return fa[x]==x?x:fa[x]=find(fa[x]);
}
int main ()
{
	while (cin>>n){
		for (int i=1;i<=n;i++) fa[i]=i; 
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		for (int i=1;i<=n;i++){
			int fu=find(i); 
			int fv=find(a[i]);
			if (fu!=fv)fa[fu]=fv; 
		}
		int ans=0;
		for (int i=1;i<=n;i++){ 
			if (fa[i]==i)ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}