#include <bits/stdc++.h>
using namespace std;

typedef long long  LL;
struct node{int l,r,L,R;};
int n,k,a[100010],cnt[100010],L,R;
LL f[21][100010],s;
queue <node> Q;

void run(node x)
{
	int mid=(x.l+x.r)>>1,l=min(x.R,mid),pos;
	for (; L>l; s+=cnt[a[--L]]++);
	for (; R<mid; s+=cnt[a[++R]]++);
	for (; L<l; s-=--cnt[a[L++]]);
	for (; R>mid; s-=--cnt[a[R--]]);
	f[k][mid]=1LL<<60;
	for (; L>=x.L; s+=cnt[a[--L]]++)
		if (f[k+1][L-1]+s<f[k][mid])  f[k][mid]=f[k+1][L-1]+s,pos=L;
	if (x.l<mid)  Q.push((node){x.l,mid-1,x.L,pos});
	if (mid<x.r)  Q.push((node){mid+1,x.r,pos,x.R});
}

void work()
{
	scanf("%d %d",&n,&k),L=1;
	for (int i=1; i<=n; i++)  scanf("%d",&a[i]),f[k][i]=1LL<<60;
	while (k--)
		{
			Q.push((node){1,n,1,n});
			while (!Q.empty())  run(Q.front()),Q.pop();
		}
	printf("%I64d",f[0][n]);
}

int main()
{
	work();
	return 0;
}
