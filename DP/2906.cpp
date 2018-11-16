#pragma GCC optimize(3)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool Finish_read;
template<class T>inline void read(T &x){Finish_read=0;x=0;int f=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;if(ch==EOF)return;ch=getchar();}while(isdigit(ch))x=x*10+ch-'0',ch=getchar();x*=f;Finish_read=1;}
template<class T>inline void print(T x){if(x/10!=0)print(x/10);putchar(x%10+'0');}
template<class T>inline void writeln(T x){if(x<0)putchar('-');x=abs(x);print(x);putchar('\n');}
template<class T>inline void write(T x){if(x<0)putchar('-');x=abs(x);print(x);}
/*================Header Template==============*/
const int maxn=105;
int n,k,pos,v[maxn];
int main() {
	read(n);read(k);
	if(k>=2) {
		puts("Yes");
		return 0;
	}
	for(int i=1;i<=n;i++) { 
		read(v[i]);
		if(!v[i])
			pos=i;
	}
	read(v[pos]);
	for(int i=2;i<=n;i++)
		if(v[i]<v[i-1]) {
			puts("Yes");
			return 0;
		}
	puts("No");
	return 0;
}