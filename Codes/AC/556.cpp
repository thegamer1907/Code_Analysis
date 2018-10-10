#include<bits/stdc++.h>

using namespace std;

int n,i;

int main(){
	scanf("%d",&n);
	while(n){
		i++;
		int sum=0;
		int j=i;
		while(j){
			sum+=j%10;
			j/=10;
		}
		if(sum==10) n--;
	}
	printf("%d",i);
	return 0;	
}