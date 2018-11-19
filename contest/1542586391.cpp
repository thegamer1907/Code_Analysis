#include<cstdio>
using namespace std;
const size_t maxn=205;
char key[2];
int n;
char words[2];
int a,b;
int main(){
	scanf("%s",key);
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%s",words);
		if(words[0]==key[0]&&words[1]==key[1]){
			puts("YES");
			return 0;
		}
		if(words[1]==key[0])
			a=1;
		if(words[0]==key[1])
			b=1;
	}
	if(a&&b)
		puts("YES");
	else
		puts("NO");
	return 0;
}