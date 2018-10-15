#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <random>

using namespace std;

int main(){
	int n,m, maxK, minK,defi,t;
	defi = 0;
	cin >> n >> m;
	int ar[n];
	int maxi = 0;
	for(int i = 0; i < n ; i++){
		cin >> ar[i];
		if(ar[i] >= maxi){
			maxi = ar[i];
		}
	}
	maxK = maxi + m;
	for(int i = 0; i < n; i++){
		defi += (maxi - ar[i]);
	}
	minK = maxi;
	if((m >= defi)){
		if((m-defi)%n == 0){
			minK += (m-defi)/n;
		}
		else{
			minK += ((m-defi)/n + 1);
		}
	}
	cout << minK << " " << maxK << endl;
	return 0;
}