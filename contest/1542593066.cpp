#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
inline int read(){
	register int res=0, c;
	while(c=getchar(), c<'0'||c>'9');
	do{ res=(res<<3)+(res<<1)+(c^48); } while(c=getchar(), '0'<=c&&c<='9');
	return res;
}
int s[100010];
map<char, bool>S, T;
map<string, bool> all;
int main(){
	string ini;
	cin>>ini;
	int N=read();
	for(int i=1; i<=N; i++){
		string now;
		cin>>now;
		S[now[0]]=1;
		T[now[1]]=1;
		all[now]=1;
	}
	if(S[ini[1]]&&T[ini[0]])puts("YES");
	else if(all[ini])puts("YES");
	else puts("NO");
}