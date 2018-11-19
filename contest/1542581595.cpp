#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string x[110];
int main(){
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	int n;
	char a,b;
	cin>>a>>b;
	cin>>n;
	int ok=0;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		if(x[i][0]==a&&x[i][1]==b)
			ok=1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			int len1=x[i].length();
			int len2=x[j].length();
			if(x[i][len1-1]==a&&x[j][0]==b)
				ok=1;
		}
	if(ok)
		puts("YES");
	else puts("NO");
return 0;
}