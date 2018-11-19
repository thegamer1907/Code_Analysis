#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=105;
int i,j,n;
string s,s0[N];

int main(){
	cin >> s; cin >> n;
	for (i=1;i<=n;i++) cin >> s0[i]; 
	for (i=1;i<=n;i++){
		if (s0[i]==s) {printf("YES\n"); return 0;}
		if (s0[i][1]==s[0]){
			for (j=1;j<=n;j++)
				if (s0[j][0]==s[1]) {printf("YES\n"); return 0;}
		} 
	}
	printf("NO\n");return 0;
}
