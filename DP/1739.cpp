#include<cstdio>
#define N 100100
using namespace std;
char s[N];
int main(){
	scanf("%s",s);
	int i,n,la=-1,ra,lb=-1,rb;
	for(i=1;s[i];i++){
		if(s[i]=='A'&&s[i-1]=='B'){
			if(la==-1) la=i-1;
			ra=i-1;
		}
		if(s[i]=='B'&&s[i-1]=='A'){
			if(lb==-1) lb=i-1;
			rb=i-1;
		}
	}
	if(la!=-1&&lb!=-1&&(rb-la>=2||ra-lb>=2)) puts("YES");
	else puts("NO");
	return 0;
}