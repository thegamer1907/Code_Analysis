#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int N;
int main(){
	cin>>N;
	for(int i=11, sum=1;; i++){
		if(i%10)sum++;
		else if(i%100)sum-=8;
		else if(i%1000)sum-=17;
		else if(i%10000)sum-=26;
		else if(i%100000)sum-=35;
		else if(i%1000000)sum-=44;
		else if(i%10000000)sum-=53;
		else if(i%100000000)sum-=62;
		else sum-=71;
		if(sum==10 && !--N)return printf("%d\n", i), 0;
	}
}