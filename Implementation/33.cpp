#include<bits/stdc++.h>

using namespace std;
const int MAX = 50000+ 5;

int main()
{
	
	int n,a,b,t; 	
	cin>>n>>a>>b;
	if(a>b) {//a<b 
		t=a;a=b;b=t;
	}
//	if(a<(n/2) && b>(n/2)) {
//		printf("Final!\n");
//		return 0 ;
//	}
	int cll = 1;
	int cl=n/2;
	for(cl = 0; cll!=n; cl++) {
		cll *=2;
	}
	cll = cl;
	while(n>0) {
		if(a<=(n/2) && b>(n/2)) {
			cl == cll ? printf("Final!\n") : printf("%d\n",cl) ;
			return 0 ;
		}
		if(b<= n/2) {
			n/=2;
			cl--;
			continue;
		} 
		else {
			a-=n/2;
			b-=n/2;  
			cl--;
			n=n/2;
			continue;
		}
	}
	printf("1\n");
	return 0 ;
}