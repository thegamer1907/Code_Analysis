#include<bits/stdc++.h>
using namespace std;
long long t,cnt,cnt2,a,b;
long long ar[1000][1000];
long long sum[500];
char c[100];
int main(){
	scanf("%lld %lld\n%s",&t,&a,&c);
	for(int k=1;k<=a;k++){
		for(int i=0;i<t-1;i++){
			if(c[i]=='B'&&c[i+1]=='G'){
				c[i]='G';
				c[i+1]='B';
				i++;
			}
		}	
	}
	printf("%s\n",c);
return 0;
}
