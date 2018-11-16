#include<cstdio>
#define maxn 30005
using namespace std;
int n,t;
int a[maxn];
bool vis[maxn];
void s(int i){
	vis[i]=1;
	if(a[i])s(i+a[i]);
	return;
}
int main(){
	scanf("%d%d",&n,&t);
	for(int i=1;i<n;i++)scanf("%d",&a[i]);
	s(1);
	if(vis[t])puts("YES");
	else puts("NO");
	return 0;
}