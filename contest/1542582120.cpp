#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int n,m;
string str[205];
bool flag[205][15][1<<14];

int main(void){
	scanf("%d",&n);
	memset(flag,false,sizeof(flag));
	for(int i=0;i<n;i++){
		cin >> str[i];
		int len=str[i].size();
		for(int j=0;j<len;j++){
			int bit=0;
			for(int k=0;k<14;k++){
				if(j+k<len){
					bit*=2;
					if(str[i][j+k]=='1')bit++;
					flag[i][k+1][bit]=true;
				}
			}
		}
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		a--;
		b--;
		int len=str[a].size();
		int len2=str[b].size();
		str[n+i]=str[a]+str[b];
		if(str[n+i].size()>500){
			if(len<50){
				str[n+i]=str[a]+str[b].substr(0,50)+str[b].substr(len2-30);
			}else if(len2<50){
				str[n+i]=str[a].substr(0,50)+str[a].substr(len-30)+str[b];
			}else{
				str[n+i]=str[a].substr(0,50)+str[b].substr(len2-50);
			}
		}
		for(int k=1;k<15;k++){
			for(int l=0;l<(1<<k);l++){
				if(flag[a][k][l])flag[n+i][k][l]=true;
				if(flag[b][k][l])flag[n+i][k][l]=true;
			}
			for(int j=1;j<=min(k-1,len);j++){
				int bit=0;
				int l2=k-j;
				if(l2>len2)continue;
				for(int lb=0;lb<j;lb++){
					if(str[a][len-1-lb]=='1')bit+=(1<<lb);
				}
				for(int lb=0;lb<l2;lb++){
					bit*=2;
					if(str[b][lb]=='1')bit++;
				}
				flag[n+i][k][bit]=true;
			}
		}
		int ans=0;
		for(int j=1;j<=14;j++){
			bool fl=true;
			for(int k=0;k<(1<<j);k++){
				if(!flag[n+i][j][k]){
					fl=false;
					break;
				}
			}
			if(!fl){
				break;
			}else{
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}