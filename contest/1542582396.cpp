#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
typedef pair<int,int> PI;
bool dp[100010][5][3][3][3][3];
int a[4];
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	dp[0][0][0][0][0][0]=true;
	bool ok=false;
	for(int i=1;i<=n;i++){
		memset(a,0,sizeof a);
		for(int j=0;j<k;j++)
			cin>>a[j];
		for(int j=0;j<=4;j++){
			for(int w=0;w<=2;w++){
				for(int x=0;x<=2;x++){
					for(int y=0;y<=2;y++){
						for(int z=0;z<=2;z++){
							dp[i][j][w][x][y][z]=dp[i-1][j][w][x][y][z];
							if(j>=1 && w>=a[0] && x>=a[1] && y>=a[2] && z>=a[3]){
								dp[i][j][w][x][y][z]|=dp[i][j-1][w-a[0]][x-a[1]][y-a[2]][z-a[3]];
							}
							if(w*2<=j && x*2<=j && y*2<=j && z*2<=j && j>0) ok|=dp[i][j][w][x][y][z];
						}
					}
				}
			}
		}
	}
	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}