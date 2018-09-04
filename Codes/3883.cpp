#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <set>
#include <queue>
#include <limits>
#include <deque>
#include <locale>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
#include <algorithm>
#include <bitset>
#include <map>
#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>
#include <cwchar>
#include <cwctype>
#define mp make_pair
#define fs first
#define se second
#define memset(a,t) memset(a,t,sizeof(a))
#define all(v) v.begin(),v.end()
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define MN 0LL
#define Mx 200000005
#define Mn -Mx
#define MX 20000000000000005
using namespace std;
int readint(){
	char c;
	while(c=getchar(),(c<'0'||c>'9')&&c!='-');
	bool flag=(c=='-');
	if(flag)c=getchar();
	int x=0;
	while(c>='0'&&c<='9'){
		x=x*10+c-48;
		c=getchar();
	}
	return flag?-x:x;
}
inline string tos(int x){
	string s;
	while(x) s=(char)(x%10+'0')+s,x/=10;
	return s;
}
int t[3],n[3],p[3];
long long all;
inline bool ok(long long x){
	long long i,tt=all;
	for(i=0;i<3;i++) tt-=max(0ll,(x*t[i]-n[i])*p[i]);
	return tt>=0;
}
int main(){
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int i;
	cin>>n[0]>>n[1]>>n[2];
	cin>>p[0]>>p[1]>>p[2];
	cin>>all;
	for(i=0;i<s.size();i++){
		if(s[i]=='B') t[0]++;
		else if(s[i]=='S') t[1]++;
		else t[2]++;
	}
	long long l=0,r=1e13,md;
	while(l+1<r){
		md=(l+r)/2;
		if(ok(md)) l=md;
		else r=md;
	}
	cout<<l<<endl;
	return 0;
}
