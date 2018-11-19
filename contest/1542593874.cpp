#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;
typedef long long LL;

char s[105][4],x[5];
int n;

int main(){
	
	int i,j,k;
	cin>>x>>n;
	for(i=1;i<=n;i++){
		cin>>s[i];
		if(s[i][0]==x[0]&&s[i][1]==x[1])
			break;
	}
	if(i<=n){
		puts("YES");
		return 0;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			if(s[i][1]==x[0]&&s[j][0]==x[1])
				break;
		if(j<=n){
		puts("YES");
		return 0;
	}
	}
	puts("NO");

	return 0;
}
