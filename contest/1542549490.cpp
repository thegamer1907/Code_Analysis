#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

int n, t,i,j,c,w;
string s, a;

int main(){
	cin>>s;
	scanf("%d", &n);
	for(c=w=i=0;i<n;i++){
		cin>>a;
		if(a[0] == s[1])
			c=1;
		if(a[1]==s[0])
			w=1;
		if(a==s){
			c=w=1;
		}
	}
	if(c&&w)
		puts("YES");
	else
		puts("NO");
	return 0;
}