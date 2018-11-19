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
int sm[100005];
int a[5];
inline int sum(vector<int> v){
	int rt=0;
	for(int i=0;i<v.size();i++) rt+=v[i];
	return rt;
}
int main(){
	ios_base::sync_with_stdio(false);
	int p,n,m,i,j,k;
	cin>>n>>m;
	memset(a,1);
	set<vector<int> >sv;
	for(i=0;i<n;i++){
		vector<int> v;
		for(j=0;j<m;j++){
			cin>>p;
			v.push_back(p);
			a[j]*=p;
			if(p==0) sm[i]++;
		}
		sv.insert(v);
	}
	int x=0;
	for(i=0;i<m;i++) x+=a[i];
	if(x){
		cout<<"NO"<<endl;
		return 0;
	}
	if(m==3){
		for(i=0;i<n;i++) if(sm[i]>1){
			cout<<"YES";
			return 0;
		}
		cout<<"NO";
		return 0;
	}else if(m==4){
		int tgs=0;
		for(i=0;i<n;i++){
			if(sm[i]>2){
				cout<<"YES";
				return 0;
			}
		}
		vector<vector<int> > vt;
		while(!sv.empty()) vt.push_back(*sv.begin()),sv.erase(*sv.begin());
		for(i=0;i<vt.size();i++){
			for(j=i+1;j<vt.size();j++){
				if(sum(vt[i])==2&&sum(vt[j])==2){
					set<int> st;
					for(k=0;k<4;k++) if(vt[i][k]==1) st.insert(k);
					for(k=0;k<4;k++) if(vt[j][k]==1) st.insert(k);
					if(st.size()==4){
						cout<<"YES";
						return 0;
					}
				}	
			}
		}
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
	return 0;
}
