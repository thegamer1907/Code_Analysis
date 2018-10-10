#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, i=1;
		cin >> k;
		while(1){
			int sum=0, temp=i;
				while(temp){
					sum+=(temp%10);
					temp/=10;
				}
				if(sum==10)
					--k;
				if(!k)
					return !printf("%d\n", i);
				++i;
		}
}