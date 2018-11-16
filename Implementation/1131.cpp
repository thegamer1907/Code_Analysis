#include <iostream>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	char map[1000];
	cin>>map;
	while (t--){
		for (int i=1;i<n;i++){
			if (map[i]=='G' && map[i-1]=='B'){
				swap(map[i],map[i-1]);
				i++;
			}
		}
	}
	cout<<map;
	return 0;
} 
