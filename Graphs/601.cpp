#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,t;
	string row;

	cin >> n >> t;
	cin >> row;

	for(int i=0; i<t; i++){
		for(int j=0; j<n-1; j++){
			if( row[j] == 'B' && row[j+1] == 'G'){
				row[j] = 'G';
				row[j+1] = 'B';
				j++;
			}
		}
	}

	cout << row << endl;
	
	return 0;
}