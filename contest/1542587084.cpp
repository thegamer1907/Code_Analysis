#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
inline const int Get_Int() {
	int num=0,bj=1;
	char x=getchar();
	while(x<'0'||x>'9') {
		if(x=='-')bj=-1;
		x=getchar();
	}
	while(x>='0'&&x<='9') {
		num=num*10+x-'0';
		x=getchar();
	}
	return num*bj;
}
string Name,s[105];
int n;
int main() {
	cin>>Name>>n;
	for(int i=1; i<=n; i++) {
		cin>>s[i];
		if(s[i]==Name) {
			puts("YES");
			return 0;
		}
	}
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(s[i][0]==Name[1]&&s[j][1]==Name[0]) {
				puts("YES");
				return 0;
			}
	puts("NO");
	return 0;
}

