#include <iostream>
#include <string>
using namespace std;

int main(){
	int y0=2, y1=0;
	string a;
	cin >> a;
	for (int i=0; i<a.size(); i++){
		if (y1==7){
			cout << "YES";
			return 0;
		}
		if (a[i]==y0)
			y1++;
		else{
			y0=a[i];
			y1=1;
		}
	}
	if (y1>6){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	
}
