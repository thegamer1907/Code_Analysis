#include<iostream>
#include<cstdio>
#include<cstring>
#define gc getchar()
using namespace std;
int i,n;
bool fir,sec;
string sm,k;
int main(){
	cin>>sm; gc;
	scanf("%d",&n); gc;
	for (i=0;i<n;i++) {
		cin>>k; gc;
		if (sm==k) {printf("YES"); return 0;}
		if (k[1]==sm[0]) sec=true;
		if (k[0]==sm[1]) fir=true;
	}
	if (sec && fir) printf("YES"); else printf("NO");
}
