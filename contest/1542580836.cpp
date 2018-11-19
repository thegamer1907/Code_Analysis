#include <bits/stdc++.h>

using namespace std;

#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

int n;
char c0,c1;
bool b0[26] , b1[26];;

int main(){
	scanf("%c%c" , &c0 , &c1);
	scanf("%d" , &n);
	repp(i,0,n){
		char x,y;
		scanf(" %c%c" , &x , &y);
		if(x == c0 && y == c1) b0[c0-'a'] = b1[c1-'a'] = 1;
		b0[y-'a'] = 1;
		b1[x-'a'] = 1;
	}
	printf("%s\n" , b0[c0-'a'] && b1[c1-'a'] ? "YES" : "NO");
	return 0;
}
