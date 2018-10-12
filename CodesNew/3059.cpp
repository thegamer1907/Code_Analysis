#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <time.h> 
#include <stack>

using namespace std;

int k;
string s;
int P[1000005];

int bsearch1(int q,int ss,int ee) {
	
	if (ee-ss<5) {
		for (int i=ss;i<=ee;i++) {
			if (P[i]-P[q-1]==k) return i;
		}
		return q;
	}
	
	int m=(ss+ee)>>1;
	if (P[m]-P[q-1]<k) return bsearch1(q,m,ee);
	else return bsearch1(q,ss,m);
	
	
}


int bsearch2(int q,int ss,int ee) {
	
	if (ee-ss<5) {
		for (int i=ee;i>=ss;i--) {
			if (P[i]-P[q-1]==k) return i;
		}
		return q-1;
	}
	
	int m=(ss+ee)>>1;
	if (P[m]-P[q-1]<=k) return bsearch2(q,m,ee);
	else return bsearch2(q,ss,m);
	
	
}



int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>k>>s;
	
	int l=s.size();
	memset(P,0,sizeof(P));
	for (int i=1;i<=l;i++) P[i]=P[i-1]+(s[i-1]=='1');
	
	long long ans=0;
	
	for (int i=1;i<=l;i++) {
		int idx1=bsearch1(i,i,l);
		int idx2=bsearch2(i,i,l);
		
//		cout<<i<<" "<<idx1<<" "<<idx2<<endl;
		
		ans+=idx2-idx1+1;
		
	}
	
	cout<<ans;
	
	return 0;

}
