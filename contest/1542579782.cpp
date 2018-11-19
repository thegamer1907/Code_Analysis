#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<vector>
#include<map>
#include<set>
using namespace std;

typedef long long int LL;
const int MAXN = 100;
const int INF = 0x3f3f3f3f;
template<class T>
void Read(T &x){
	x=0;char c=getchar();bool flag=0;
	while(c<'0'||'9'<c){if(c=='-')flag=1;c=getchar();}
	while('0'<=c&&c<='9'){x=x*10+c-'0';c=getchar();}
	if(flag)x=-x;
}

int n;
char want[3];
char str[MAXN+10][3];

int main(){
	scanf("%s",want);
	Read(n);
	for(int i=1;i<=n;++i)scanf("%s",str[i]);
	
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(str[i][1]==want[0]&&str[j][0]==want[1]){
				puts("YES");
				return 0;
			}
		}
		if(str[i][0]==want[0]&&str[i][1]==want[1]){
			puts("YES");
			return 0;
		}	
	}
	puts("NO");
}
