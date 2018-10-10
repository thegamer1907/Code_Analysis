/*input
10
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isTen(int a){
	int sum = 0;
	while(a){
		sum += a%10;
		a /= 10;
	}

	return (sum==10);
}

int main(){
	int n;
	cin>>n;

	int i = 1;
	int answer = 18;
	while(i<=n){
		answer++;
		if(isTen(answer)){
			i++;
		}

	}

	cout<<answer;

	return 0;
}