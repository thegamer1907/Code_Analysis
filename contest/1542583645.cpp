#include<bits/stdc++.h>
using namespace std;
char a[5],b[5];
int q,w,n;
int main(){
	scanf("%s%d",a,&n);
	for(int i=0;i<n;++i){
		scanf("%s",b);
		if(b[1]==a[0])q=1;
		if(b[0]==a[1])w=1;
		if(b[0]==a[0]&&b[1]==a[1]){
			puts("YES");
//			system("pause");
			return 0;
		}
		if(q&&w){
			puts("YES");
//			system("pause");
			return 0;
		}
	}
	puts("NO");
//	system("pause");
	return 0;
} 
