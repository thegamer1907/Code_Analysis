#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, Ted = 0;
	char Tony;
	string Pablo;
	cin >> n; 
	cin >> Pablo;
	for(int i = 0; i < Pablo.size(); i++){
		if(Pablo[i] == Tony){
			Ted++;
		}
		Tony =  Pablo[i];
	}
	cout << Ted << endl;
}
