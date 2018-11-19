#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void readInt(int &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
inline void readLong(ll &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
/*================Header Template==============*/
int cnt[17],x,t,n,k;
int main() {
	readInt(n);
	readInt(k);
	for(int i=1;i<=n;i++) {
		t=0;
		for(int j=1;j<=k;j++) {
			readInt(x);
			t=(t<<1)|x;
		}
		cnt[t]++;
	}
	for(int i=0;i<16;i++)
		for(int j=0;j<16;j++)
			if(cnt[i]&&cnt[j]&&(i&j)==0) {
				puts("YES");
				return 0;
			}
	puts("NO");
	return 0;
}