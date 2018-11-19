#include<bits/stdc++.h>
#define ll long long
#define M 100005
#define oo 1000000000
#define P 999911659
#define O_O(x) cout<<x<<'\n'
#define V_V(x) scanf("%d",&x)
#define S 19
using namespace std;
int n,m,ans;
char str[3],str1[105][4];
int main(){
	int i,j;
	scanf("%s",str+1);
	cin>>n;
	for(i=1;i<=n;i++){
		scanf("%s",str1[i]+1);
		if(str1[i][1]==str[1]&&str1[i][2]==str[2]){
			ans=1;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(str1[i][2]==str[1]&&str1[j][1]==str[2]){
				ans=1;
			}
		}
	}
	if(ans){
		puts("YES");
	}else puts("NO");
	return 0;
}
