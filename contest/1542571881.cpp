#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXN 100000

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<int,int> mi;

int main(){
	string ans;
	cin >> ans;
	int x;
	cin >> x;
	string t[x];
	for(int i=0;i<x;i++){
		cin >> t[i];
		if(t[i] == ans){
			printf("YES\n");
			return 0;
		}
	}
	bool foo=false;
	for(int i=0;i<x;i++){
		if(t[i][1]!=ans[0] )continue;
		foo = true;
	}
	if(!foo){
		printf("NO\n");
		return 0;
	}
	foo = false;
	for(int i=0;i<x;i++){
		if(t[i][0]!=ans[1] )continue;
		foo = true;
	}
	if(!foo){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	return 0;
}