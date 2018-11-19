#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <ctime>
#include <map>
#include <queue>
#include <cstdlib>
#include <string>
#include <climits>
#include <set>
#include <vector>
using namespace std;
string s,a[110];
inline bool check(int x,int y){
	string p;p=a[x]+a[y];int ls=s.size(),ps=p.size();
	for(int i=0;i<ps;i++)if(p[i]==s[0]){
		bool flag=1;
		for(int j=1;j<ls;j++)if(p[i+j]!=s[j])flag=0;
		if(flag)return 1;
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin>>s;
	int n;cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)if(check(i,j))return puts("YES")&0;
	puts("NO");
	return 0;
}