#include <stdio.h>
#include <algorithm>

using namespace std;

const int N = 1e5 + 1;
int a[N] , n , t , sum=0, ans=-1;


void f(){
	
int l=0,r=0;

while(l<n){
	
while(r<n && a[r]+sum<=t ){
	sum += a[r];
	r++;          }
	
ans = max( ans, r-l );
sum-=a[l];
l++;
}
}

int main() {

scanf("%d%d",&n,&t);

for(int i=0;i<n;i++) scanf("%d",a+i);

f();

printf("%d\n", ans);
	return 0;
}