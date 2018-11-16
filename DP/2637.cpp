#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	scanf("%d",&n);
	for (int i=19;;i+=9){
		int s=0,k=i;
		while (k)s+=k%10,k/=10;
		if (s==10)n--;
		if (!n){
			printf("%d",i);
			return 0;
		}
	}
}