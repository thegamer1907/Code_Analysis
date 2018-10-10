#include "stdio.h"
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int log10(int x){
	int pow10=10;
	int ans=0;
	while(x%pow10==0){
		pow10*=10;ans++;
	}
	return ans;
}
int main(){
	int q;
	cin>>q;
	int perfect=0;
	int sum=0;
	while(q>0){
		perfect++;
		int k=log10(perfect);
		sum-=9*k;
		sum++;
		if(sum==10)q--;
		//cout<<q<<endl;
	}
	cout<<perfect<<endl;
	return 0;
}