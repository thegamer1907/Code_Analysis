#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<vector>
#include<stack>
#include<map>
#include<math.h>
using namespace std ;

#define clr(x) memset(x , 0 , sizeof(x))
typedef long long ll;
const int inf = 0x3f3f3f3f ;
const int maxn = 1e4 + 5 ;
int a[maxn] ;
bool check(int x){
	int sum=0;
	while(x){
		sum += x % 10;
		x /= 10;
	}
	if(sum==10){
		return 1;
	}
	return 0;
}
void init() {
    int k = 1 ;
    int now = 19 ;
    a[1] = 19 ;
    while(k < maxn) {
        now += 9 ;
        if(check(now)) {
            a[++k] = now ;
        }
    }
}

int main() {
    int k ;
    init() ;
    while(~scanf("%d" , &k)) {
        printf("%d\n" , a[k]) ;
    }
    return 0 ;
}
