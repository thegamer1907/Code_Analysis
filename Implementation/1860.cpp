#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	
	int n, a, b, c, s1=0, s2=0, s3=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; ++i){
		scanf("%d%d%d", &a, &b, &c);
		s1+=a;	s2+=b;	s3+=c;
	}
	
	if(s1==0 && s2==0 && s3==0)
		puts("YES");
		
	else
		puts("NO");
	
	
	
	
	
	return 0;
}
