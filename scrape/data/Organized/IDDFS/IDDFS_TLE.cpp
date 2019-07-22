#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

const int Maxn=1e5;

int N,K,len;
char s[Maxn+5];

int L[Maxn+5],R[Maxn+5];

int main() {
	#ifdef LOACL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	scanf("%d %d\n%s",&N,&K,s+1);
	for(int i=1,tmp[2]={-1,-1};i<=N;i++) {
		int t=s[i]-'0';
		L[i]=tmp[t^1];
		tmp[t]=i;
	}
	for(int i=N,tmp[2]={N+1,N+1};i>=1;i--) {
		int t=s[i]-'0';
		R[i]=tmp[t^1];
		tmp[t]=i;
	}
	bool First=false,Second=true;
	for(char op='0';op<='1'&&First==false;op++) {
		vector<int> tmp;
		for(int i=1;i<=N;i++)
			if(s[i]!=op)
				tmp.push_back(i);
		for(int l=1,r=K;r<=N;l++,r++) {
			int tl,tr;
			for(tl=0;tl<tmp.size()&&tmp[tl]<l;tl++);
			for(tr=-1;tr+1<tmp.size()&&tmp[tr+1]<=r;tr++);
			if(tl==0&&tr==tmp.size()-1) {
				First=true;
				break;
			}
			int l1=tmp[tl?0:tr+1],r1=tmp[tr<tmp.size()-1?tmp.size()-1:tl-1];
			int l2=l1>1?1:min(R[l1],r1+1),r2=l2<N?N:min(L[r1],l1-1);
			Second&=(r1-l1+1<=K|r2-l2+1<=K);
		}
	}
	puts(First?"tokitsukaze":(Second?"quailty":"once again"));
	return 0;
}