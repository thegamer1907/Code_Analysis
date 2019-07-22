#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define per(i,a,b) for (int i=(a); i>=(b); i--)
using namespace std;
typedef long long LL;
 
inline int read() {
    int x=0,f=1; char ch=getchar();
    while (!(ch>='0'&&ch<='9')) {if (ch=='-')f=-1;ch=getchar();}
    while (ch>='0'&&ch<='9') {x=x*10+(ch-'0'); ch=getchar();}
    return x*f;
}
 
const int N = 100005;
 
LL n,m,k;
LL p[N];
 
int main() {
 
	cin>>n>>m>>k;
	rep(i,1,m) scanf("%I64d",&p[i]);
	int ans=0,ptr=1;
	while (ptr<=m) {
		int ptr2=ptr;
		while (ptr2<m&&(p[ptr2+1]-ptr)/k==(p[ptr]-ptr)/k) ptr2++;
		++ans;
		ptr=ptr2+1;
	}
	printf("%d\n",ans);
 
	return 0;
	
}