#include <iostream>
using namespace std;
inline int cal(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int k;
	cin>>k;
	int cnt=0;
	for(int i=1;;++i){
		if(cal(i)==10){
			++cnt;
			if(cnt==k){
				cout<<i<<endl;
				return 0;;
			}
		}
	}
	return 0;
}
