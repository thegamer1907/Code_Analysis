#include <iostream>

using namespace std;

int main(){
	bool f1 = false, f2 = false;
    string pass;
    cin >> pass;
	int n;
	cin >> n;
	pair <char, char> d;
	for (int i = 1; i <= n; i++){
		cin >> d.first >> d.second;
		if (d.second == pass[0])
			f1 = true;
		if (d.first == pass[1])
			f2 = true;
		if (d.first == pass[0] && d.second == pass[1]){
		    f1 = true; f2 = true;
		}
	}
	if (f1 && f2)
		cout << "YES";
	else
		cout << "NO";
}