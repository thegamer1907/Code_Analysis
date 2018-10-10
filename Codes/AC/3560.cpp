/*input
68
*/
#include <bits/stdc++.h>
using namespace std;
long long n;
bool check(long long k){
	long long eat = 0, left = n;
	while(left){
		eat += min(k,left);
		left = max(left-k,0ll);
		left -= left/10;
	}
	return eat*2 >= n;
}
int main(){
	cin>>n;
	long long low = 1, high = n , mid;
	while(low<high){
		mid = low + high >>1;
		if(check(mid)) high = mid;
		else low = mid + 1;
	}
	cout<<low;
}