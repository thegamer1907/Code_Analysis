#include<cstdio>
#include<iostream>
using namespace std;
string s,a[101],o;
int n;
int main(void){
	register int i,j;
	cin>>s;
	cin>>n;
	for(i=1;i<=n;++i)
		cin>>a[i];
	for(i=1;i<=n;++i)
		for(j=1;j<=n;++j){
			o=a[i]+a[j];
			if(o.find(s)!=-1){
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	return 0;
}