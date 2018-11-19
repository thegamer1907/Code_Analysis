#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
#include<vector>
#include<list>
#include<set>
#include<bitset>
#include<stack>
#include<cctype>
#define sc(x) scanf("%d",&x);
#define pr(x) cout<<#x<<": "<<x<<" ";
#define prln(x) cout<<#x<<": "<<x<<endl;
#define bug() cout<<"bug: "<<endl;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const double eps = 1e-4;
const int mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5+7;
const int maxm = 1e6+7;
const double pi = acos(-1.0);
int main(){
	char pw[3];
	char s[3];
	int n;
	while(cin>>pw){
		cin>>n;
		bool flag1 = false, flag2 = false;
		for(int i = 0; i < n; i++){
			cin>>s;
			if(s[0] == pw[0] && s[1] == pw[1]) flag1 = flag2 = true;
			if(s[0] == pw[1]) flag1 = true;
			if(s[1] == pw[0]) flag2 = true;
		}
		if(flag1 && flag2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}