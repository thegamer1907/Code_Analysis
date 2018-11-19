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
#define Mx 2000000005
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
inline int pt(int a[],int l,int r){
	int p,i,j;
	p=a[l];
	i=l;
	j=r+1;
	for(;;){
		while(a[++i]<p) if(i>=r) break;
		while(a[--j]>p) if(j<=l) break;
		if(i>=j) break;
		else swap(a[i],a[j]);
	}
	if(j==l) return j;
	swap(a[l],a[j]);
	return j;
}
inline void q_sort(int a[],int l,int r){
	int q;
	if(r>l){
		q=pt(a,l,r);
		q_sort(a,l,q-1);
		q_sort(a,q+1,r);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	double h,m,s,t1,t2;
	int ans=0;
	cin>>h>>m>>s>>t1>>t2;
	h*=5;
	m+=s/60;
	h+=m/60;
	t1*=5;
	t2*=5;
	if(t1>t2) swap(t1,t2);
	if(t1<h&&h<t2) ans++;
	if(t1<m&&m<t2) ans++;
	if(t1<s&&s<t2) ans++;
    ans%=3;
	if(!ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
