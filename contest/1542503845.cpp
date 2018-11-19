#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<deque>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<sstream>
#include<time.h>
#define inf 0x3FFFFFFF
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fo_(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define MOD 100000007
#define N
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	//freopen("C:\\test.txt","r",stdin);
	string s;cin>>s;
	int n;cin>>n;
	string t[n];fo(i,0,n-1) cin>>t[i];
	bool f=false;
	fo(i,0,n-1) if(t[i]==s) f=1;
	fo(i,0,n-1)
		fo(j,0,n-1)
			if(t[i][1]==s[0]&&t[j][0]==s[1]) f=1;
	if(f) cout<<"YES";
	else cout<<"NO";
	return 0;
}
