#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#define maxn 1000010
#define inf 1<<29
#define base 10000
using namespace std;
char t[2],s[110][2];
int n;
bool solve()
{
	for(int i=1;i<=n;++i){
		if(s[i][0]==t[0]&&s[i][1]==t[1]) return true;
		if(s[i][1]==t[0]){
			for(int j=1;j<=n;++j) if(s[j][0]==t[1]) return true;
		}
	}
	return false;
}
int main()
{
    cin>>t;
    cin>>n;
    for(int i=1;i<=n;++i) cin>>s[i];
	if(solve()) cout<<"YES";
	else cout<<"NO";
	return 0;
}
