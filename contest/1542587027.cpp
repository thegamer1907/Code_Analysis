#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
inline int read(){
	register int res=0, c;
	while(c=getchar(), c<'0'||c>'9');
	do{ res=(res<<3)+(res<<1)+(c^48); } while(c=getchar(), '0'<=c&&c<='9');
	return res;
}
int s[100010];
map<char, bool>S, T;
map<string, bool> all;
int main(){
	double H=read(), M=read(), S=read(), t1=read(), t2=read();
	if(H==12)H=0;
	else H*=5;
	if(t1==12)t1=0;
	else t1*=5;
	if(t2==12)t2=0;
	else t2*=5;
	if(t1>t2)swap(t1, t2);
	if(M!=0 || S!=0)H+=0.1;
	if(S!=0)M+=0.1;
	if(H>t1 && H<t2 && M>t1 && M<t2 && S>t1 && S<t2)
		puts("YES");
	else if((H>t2 || H<t1) && (M>t2 || M<t1) && (S>t2 || S<t1))
		puts("YES");
	else puts("NO");
}