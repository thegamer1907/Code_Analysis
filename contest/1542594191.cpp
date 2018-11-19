#include<bits/stdc++.h>
#define LL long long
#define PII pair<int, int>
#define MP make_pair
#define PB push_back
#define F first
#define S second
using namespace std;
char s[3], c[3];
bool ok[2];
int n;
int main(){
	scanf("%s", s);
	scanf("%d", &n);
	while(n--){
		scanf("%s", c);
		if(strcmp(s, c) == 0)
			return puts("YES"), 0;
		else{
			if(s[1] == c[0]) ok[0] = 1;
			if(s[0] == c[1]) ok[1] = 1;
			if(ok[0] && ok[1]) return puts("YES"), 0;
		}
	}
	return puts("NO"), 0;
}