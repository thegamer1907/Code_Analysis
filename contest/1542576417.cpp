#include <bits/stdc++.h>
using namespace std;

int st[14];
bool vis[205][8200];
char s[205][410];
char pre[205][205], suf[205][205];
char tmp[1050];

int u(int p, int s, int to){
	for(int i=0;i<st[13];i++){
		vis[to][i]=vis[p][i]|vis[s][i];
	}
	if(strlen(pre[p])>=100){
		strcpy(pre[to], pre[p]);
	}
	else{
		int len1=strlen(pre[p]);
		int len2=strlen(pre[s]);
		for(int i=0;i<min(100, len1+len2);i++){
			if(i<len1)pre[to][i]=pre[p][i];
			else pre[to][i]=pre[s][i-len1];
		}
	}
	if(strlen(suf[s])>=100){
		strcpy(suf[to], suf[s]);
	}
	else{
		int len1=strlen(suf[p]);
		int len2=strlen(suf[s]);
		for(int i=0;i<min(100, len1+len2);i++){
			if(i<len2){
				suf[to][i]=suf[s][len2-i-1];
			}
			else suf[to][i]=suf[p][len1-1-(i-len2)];
		}
		int len=strlen(suf[to]);
		reverse(suf[to], suf[to]+len);
	}
	strcpy(tmp, suf[p]);
	int len=strlen(tmp);
	strcpy(tmp+len, pre[s]);
	len=strlen(tmp);
	for(int j=1;j<=12;j++){
		for(int k=0;k+j-1<len;k++){
			int num=0;
			for(int l=0;l<j;l++){
				num*=2;
				num+=tmp[k+l]-'0';
			}
			vis[to][num+st[j]]=true;
			//printf("%d %d\n", i, num);
		}
	}
	for(int i=12;i>=1;i--){
		bool ok=true;
		for(int j=st[i];j<st[i+1];j++){
			if(!vis[to][j])ok=false;
		}
		if(ok)return i;
	}
	return 0;
}

int n, m;

int main(){
	st[0]=0;
	for(int i=1;i<=13;i++){
		st[i]=st[i-1]+(1<<(i-1));
	}
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s", s[i]);
		strcpy(pre[i], s[i]);
		strcpy(suf[i], s[i]);
		int len=strlen(s[i]);
		for(int j=1;j<=12;j++){
			for(int k=0;k+j-1<len;k++){
				int num=0;
				for(int l=0;l<j;l++){
					num*=2;
					num+=s[i][k+l]-'0';
				}
				vis[i][num+st[j]]=true;
				//printf("%d %d\n", i, num);
			}
		}
	}
	scanf("%d", &m);
	for(int i=1;i<=m;i++){
		int x, y;
		scanf("%d%d", &x, &y);
		printf("%d\n", u(x, y, i+n));
	}
}