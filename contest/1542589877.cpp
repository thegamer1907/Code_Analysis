#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+5;

int n;
int srt[1000] , nd[1000];
string s , t[102];

int main(){
	cin>>s;
	cin>>n;
	for(int i = 0;i < n;i++){
		cin>>t[i];
		srt[t[i][0]] = 1;
		nd[t[i][1]] = 1;
		if(t[i] == s){
			printf("YES\n");
			return 0;
		}
	}
	if(nd[s[0]] and srt[s[1]])printf("YES\n");
	else printf("NO\n");
}
