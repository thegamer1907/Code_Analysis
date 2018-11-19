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
set<string> have[205][25];
string s,sst[233],sen[233];
int n,q,p1,p2,ans;
int main() {
	readInt(n);
	for(int i=1;i<=n;i++) {
		cin>>s;
		int l=s.length();
		for(int p=0;p<l;p++)
			for(int len=1;len<=min(l-p,22);len++)
				have[i][len].insert(s.substr(p,len));
		if(l>=22) {
			sst[i]=s.substr(0,22);
			sen[i]=s.substr(l-22,22);
		}
		else
			sst[i]=sen[i]=s;
	}
	readInt(q);
	for(int i=1;i<=q;i++) {
		cin>>p1>>p2;
		s=sen[p1]+sst[p2];
		int pos=sen[p1].length();
//		cout<<s<<endl;
		for(int l=1;l<=22;l++) {
			for(set<string>::iterator en=have[p1][l].begin();en!=have[p1][l].end();en++)
				have[n+i][l].insert(*en);
			for(set<string>::iterator en=have[p2][l].begin();en!=have[p2][l].end();en++)
				have[n+i][l].insert(*en);
		}
//		cout<<"!!!"<<pos<<" "<<endl;
		for(int p=pos-1;p>=max(0,pos-23);p--)
			for(int q=pos;q<min((int)s.length(),pos+22-(pos-p));q++) {
//				cout<<p<<" "<<q<<" "<<q-p+1<<" "<<s.substr(p,q-p+1)<<endl;
				have[n+i][q-p+1].insert(s.substr(p,q-p+1));
			}
		ans=0;
		for(int l=1;l<=22;l++)
			if(have[n+i][l].size()==(1<<l))
				ans=max(ans,l);
		printf("%d\n",ans);
		s=sst[p1]+sst[p2];
		sst[n+i]=s.substr(0,min(22,(int)s.length()));
		s=sen[p1]+sen[p2];
		sen[n+i]=s.substr(max((int)s.length()-22,0),min(22,(int)s.length()));
	}
}