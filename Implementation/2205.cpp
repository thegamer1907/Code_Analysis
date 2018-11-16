#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w,s;
	scanf("%d%d%d",&k,&n,&w);
	s=k*w*(w+1)/2-n;
	if(s<0) s=0;
	printf("%d",s);
}
  