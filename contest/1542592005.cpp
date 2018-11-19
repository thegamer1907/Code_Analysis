#include <cstdio>
#include <iostream>
using namespace std;
int i,j,m,n;
string s[105],t;
bool first[105],second[105];
int main(){
	cin>>t;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>s[i];
		if (s[i]==t){
			printf("YES\n");
			return 0;
		}
		first[s[i][0]-'a']=true;
		second[s[i][1]-'a']=true;
	}
	if ((second[t[0]-'a'])&&(first[t[1]-'a']))printf("YES\n");
	else printf("NO\n");
	return 0;
}