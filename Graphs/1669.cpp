#include <iostream>
using namespace std;
const int MAX_N = 1e4+10;
int arr[3*MAX_N];
int main(){
	int n , t;
	cin>>n>>t;
	for(int i =1 ; i<n ; i++) cin>>arr[i];
	
	int j = 1;
	for( ; j<t ; ){
		j = j+arr[j];
	}
	cout<<(j==t ? "YES" : "NO")<<endl;

}