#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll read(){
	ll rt=0;char ch=getchar();
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){rt=rt*10+ch-'0';ch=getchar();}
	return rt;
}
ll n,k,data[200000],f[100030][22],ttt[100050];
void DAC(int qqq,int l,int r,int L,int R,ll sum){
	if(l>r)return;
	int mid=(l+r)>>1,M=-1;
	int point = min(mid,R);
//	cout<<qqq<<" "<<point<<endl;
	for(int i=l;i<=mid;i++)sum += ttt[data[i]]++;
	for(int i=L;i<=point;i++){
		sum -= --ttt[data[i]];
		if(sum + f[i][qqq-1] < f[mid][qqq]){
			M = i; f[mid][qqq] = sum + f[i][qqq-1];
		}
	}
	
	for(int i=point;i>=L;i--) sum += ttt[data[i]]++;
	for(int i=mid;i>=l;i--) sum -= --ttt[data[i]];
	DAC(qqq,l,mid-1,L,M,sum);
	
	for(int i=l;i<=mid;i++) sum += ttt[data[i]]++;
	for(int i=L;i<M;i++) sum -= --ttt[data[i]];
	DAC(qqq,mid+1,r,M,R,sum);
	
	for(int i=mid;i>=l;i--) sum -= --ttt[data[i]];
	for(int i=M-1;i>=L;i--) sum += ttt[data[i]]++;
}
int main(){
	n=read();k=read();
	for(int i=1;i<=n;i++)data[i]=read();
	for(int i=1;i<=n;i++){
		f[i][0] = f[i-1][0] + (ttt[data[i]]++);
	//	cout<<f[i][0]<<endl;
	}
	
//	p = 1;
//	q = 0;
	for(int i=1;i<k;i++){
		memset(ttt,0,sizeof ttt);
		for(int j=0;j<=n;j++)f[j][i] = 0x7fffffffffffffLL;		
	/*	for(int j=1;j<=n;j++)cout<<f[j][i]<<" ";
		cout<<endl;*/
		DAC(i,1,n,1,n,0);
		/*for(int j=1;j<=n;j++)cout<<f[j][i]<<" ";
		cout<<endl;*/
	}
	cout<<f[n][k-1];
	return 0;
}