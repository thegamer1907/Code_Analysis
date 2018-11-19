

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+1;
const int inf = 0x7fffffff;

char s[3],s1[3];
bool can[3];
int n;
int main(){
	scanf("%s",&s);
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%s",s1);
		for(int t=0;t<2;++t){
			if(s1[1]==s[0])can[1]=1;
			if(s1[0]==s[1])can[0]=1;
			if(s[0]==s1[0]&&s[1]==s1[1])return 0*printf("YES");
		}
	}
	if(can[0]&&can[1])cout<<"YES";
	else	cout<<"NO";
}
