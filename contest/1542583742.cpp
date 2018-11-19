#include "bits/stdc++.h"
using namespace std;
#define si(x) scanf("%d",&x) 
int main()
{
	char r[2];
	scanf("%s",r);
	
	int n;
	si(n);
	char s[n][3];
	bool f=false;
	
	for(int i=0;i<n;i++){
		scanf("%s",s[i]);
		if(s[i][0]==r[0] && s[i][1]==r[1])f=true;
	}
	
	int a1=0,a2=0,j=0,k=0;
	int ix,jx;
	
	for(int i=0;i<n;i++){
		if(s[i][0]==r[1]){
			a1++;
			ix=i;
		}
		if(s[i][1]==r[0]){
			a2++;
			jx=i;
		}
		//printf("%d %d",ix,jx);
	}
	//printf("%d %d %d %d",a1,a2,ix,jx);
	if(a1>=1 && a2>=1)f=true;
	//else if(a1==1 && a2==1 && ix!=jx)f=true;
	if(f)printf("YES");
	else printf("NO");
	return 0;
}