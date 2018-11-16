#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int maxn=1000010;
char str[maxn];
int z[maxn],sum[maxn];
bool exits[maxn];
void init_z_func(){
	int n=strlen(str);
	z[0]=n;
	int l=0,r=0;
	for(int i=1;i<n;i++){
		if(r<i){
			l=r=i;
			while(r<n && str[r]==str[r-i]) r++;
			z[i]=r-l,r--;
		}else{
			int k=i-l;
			if(z[k]<r-i+1) z[i]=z[k];
			else{
				l=i;
				while(r<n && str[r]==str[r-l]) r++;
				z[i]=r-l,r--;
			}
		}
	}
}
int main(){
	scanf("%s",str);
	init_z_func();
	int n=strlen(str),ans=0;
	for(int i=1;i<n;i++){
		sum[1]++,sum[z[i]+1]--;
		if(i+z[i]==n) exits[z[i]]=true;
	}
	for(int i=1;i<=n;i++){
		sum[i]+=sum[i-1];
		if(sum[i]>=2 && exits[i]) ans=i;
	}
	if(ans==0) puts("Just a legend");
	else{
		for(int i=0;i<ans;i++)
			putchar(str[i]);
		puts("");
	}
	return 0;
}