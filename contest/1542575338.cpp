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
int h[5],m[5],s[5];
bool f1=1,f2=1;
int main() {
	readInt(h[2]);
	readInt(h[3]);
	readInt(h[4]);
	readInt(h[0]);
	readInt(h[1]);
	m[0]=s[0]=m[1]=s[1]=0;
	m[2]=h[3];
	s[2]=h[4];
	m[3]=(h[3]%5)*12;
	int tmph3=0,tmph4=0;
	if(m[3]>=60) {
		tmph3+=m[3]/60;
		m[3]%=60;
	}
	s[3]=0;
	m[4]=(h[4]%5)*12;
	if(m[4]>=60) {
		tmph4+=m[4]/60;
		m[4]%=60;
	}
	s[4]=0;
	h[3]/=5;
	h[3]+=tmph3;
	if(h[3]==0)
		h[3]=12;
	h[4]/=5;
	h[4]+=tmph4;
	if(h[4]==0)
		h[4]=12;
//	for(int i=0;i<=4;i++)
//		cout<<h[i]<<" "<<m[i]<<" "<<s[i]<<endl;
	int x=h[0],y=m[0],z=s[0];
	while(x!=h[1]||y!=m[1]||z!=s[1]) {
//		cout<<x<<" "<<y<<" "<<z<<" "<<int(f1)<<endl;
		for(int i=2;i<=4;i++) {
			if(x==h[i]&&y==m[i]&&z==s[i]) {
				f1=0;
				break;
			}
		}
		z++;
		if(z==60) {
			y++;
			z=0;
		}
		if(y==60) {
			x++;
			y=0;
		}
		if(x==13)
			x=1;
	}
	x=h[1],y=m[1],z=s[1];
	while(x!=h[0]||y!=m[0]||z!=s[0]) {
		for(int i=2;i<=4;i++) {
			if(x==h[i]&&y==m[i]&&z==s[i]) {
				f2=0;
				break;
			}
		}
		z++;
		if(z==60) {
			y++;
			z=0;
		}
		if(y==60) {
			x++;
			y=0;
		}
		if(x==13)
			x=1;
	}
	if(f1||f2)
		puts("YES");
	else
		puts("NO");
	return 0;
}