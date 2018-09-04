#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

const int MAXN=1000007 ;
unsigned long long pre[MAXN] , base=10007 , pows[MAXN] ;
char s[MAXN] ;
int n ;

unsigned long long ha(int l,int r){
	return pre[r]-pre[l-1]*pows[r-l+1] ;
}

int main(){
	scanf("%s",s+1) ;
	n=(int)strlen(s+1) ;
	pows[0]=1 ;
	for(int i=1;i<=MAXN-3;++i) pows[i]=pows[i-1]*base ;
	for(int i=1;i<=n;++i){
		pre[i]=pre[i-1]*base+s[i] ;
	}
	for(int i=n-2;i>=1;--i){
		if(ha(1,i)==ha(n-i+1,n)){
			for(int j=2;j<n-i+1;++j){
				if(ha(1,i)==ha(j,j+i-1)){
					for(int k=1;k<=i;++k) cout << s[k] ;
					cout << '\n' ;
					return 0 ;
				}
			}
		}
	}
	cout << "Just a legend\n" ;
	return 0 ;
}
