#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	t1=(t1*3600)%43200;
	t2=(t2*3600)%43200;
	m=(m*60+s)%43200;
	h=(h*3600+m)%43200;	
	
	s=s*43200/60;
	m=m*43200/3600;

//	printf("%d %d %d %d %d",h,m,s,t1,t2);

	int i=t1;
	while(i!=t2){
		if(i==h)break;
		if(i==m)break;
		if(i==s)break;
		if(i==43199)i=0;
		else i++;
	}
	if(i==t2&&t2!=h&&t2!=m&&t2!=s){
		printf("YES\n");
		return 0;
	}
	i=t1;
	while(i!=t2){
		if(i==h)break;
		if(i==m)break;
		if(i==s)break;
		if(i==0)i=43199;
		else i--;
	}
	if(i==t2&&t2!=h&&t2!=m&&t2!=s){
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}