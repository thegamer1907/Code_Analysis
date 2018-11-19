#include<bits/stdc++.h>
#define N 222222
#define M 1000000007
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
string E,S,s[111];
int n,i,j;
int main(){
	cin>>E;scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>s[i];
		if(s[i]==E)return puts("YES"),0;
	}
	for(i=1;i<=n;i++)for(j=1;j<=n;j++){
		string S="";
		S=S+s[i][1];
		S=S+s[j][0];
		if(S==E)return puts("YES"),0;
	}
	puts("NO");
}