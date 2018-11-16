#include <iostream>
#include <stdio.h>
#include <bitset>
#include <string>
#include <cmath>
#include <utility>
#include <limits.h>

using namespace std;
int n;
int counter=0;
void g(int a){
	if(a<=n){
		counter+=n-a;

	}else{
		if(a%2==0){
			counter++;
			g(a/2);
		}else{
			counter++;
			g(a+1);
		}
	}
}

int main(){
	int m;
	cin>>n>>m;
	g(m);
	cout<<counter;
	return 0;
}
