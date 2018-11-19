#include <stdio.h>
#define R register
inline int read(){
	R int x; R bool f; R char c;
	for (f=0; (c=getchar())<'0'||c>'9'; f=c=='-');
	for (x=c-'0'; (c=getchar())>='0'&&c<='9'; x=(x<<3)+(x<<1)+c-'0');
	return f?-x:x;
}
int n,k,tmp[4],v[16];
int main(){
	n=read(),k=read();
	for (R int i=1; i<=n; ++i){
		R int ttmp=0;
		for (R int j=0; j<k; ++j) ttmp=ttmp<<1|(read());
		v[ttmp]++;
	}
	for (R int i=0; i<15; ++i)
		if (v[i])
			for (R int j=0; j<15; ++j)
				if (!(i&j)&&v[j]) {puts("YES");return 0;}
	puts("NO");
	return 0;
}
