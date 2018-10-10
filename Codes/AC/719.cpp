#include<bits/stdc++.h>
using namespace std;
int k,i,j,x;
int main(){
	cin>>k;
	for(i=19;k;++i){
		for(x=0,j=i;j;j/=10)x+=j%10;
		if(x==10)--k;
	}

	cout<<i-1<<endl;
	return 0;
}
