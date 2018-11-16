// Solution by Bektemir Srazhdinov
#include <bits/stdc++.h>
using namespace std;
const int N=1234567;
const int M=(int)1e9+7;
int n,t,i,j;
char ch[51];
int main(){
	scanf("%d%d%s",&n,&t,ch);
	for(j=0;j<t;j++){
		for(i=0;i<n-1;i++){
			if(ch[i]=='B' && ch[i+1]=='G'){
				swap(ch[i],ch[i+1]);
				i++;
			}
		}
	}
	puts(ch);
    return 0;
}
