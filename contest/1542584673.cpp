#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string p;
	cin >> p;

	int n;
	cin >> n;

	string str[200];

	for(int i = 0;i < n;i++)
		cin >> str[i];

	for(int i = 0;i < n;i++){

		if(str[i][0] == p[0] && str[i][1] == p[1]){
			cout << "YES\n";
			return 0;
		}
		if(str[i][1] == p[0]){
			for(int j = 0;j < n;j++){
				//if(i == j) continue;

				if(str[j][0] == p[1]){
					cout << "YES\n";
					return 0;
				}
			}
		}

	}

	cout << "NO\n";
	return 0;
}
