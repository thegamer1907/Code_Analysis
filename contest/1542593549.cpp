#include <bits/stdc++.h>
using namespace std;
const int N=105;
string ask,s[N];
int i,n,ok,ok0,ok1;
int main(int argc,char *argv[]){
	cin>>ask>>n;
	for(i=1;i<=n;++i){
		cin>>s[i];
		if(s[i]==ask)ok=1;
	}
	for(i=1;i<=n;++i){
		if(s[i][0]==ask[1])ok0=1;
		if(s[i][1]==ask[0])ok1=1;
	}
	printf("%s\n",((ok0&&ok1)||ok)?"YES":"NO");
	return 0; 
}
