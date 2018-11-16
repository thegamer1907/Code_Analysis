#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n , t;
	cin >> n >> t;
	string str;
	cin >> str;
	for (int i=0;i<t;++i){
		for (int j=0;j<n;++j){
			if (str[j] == 'B' && str[j+1] == 'G'){
				str[j+1] = 'B';
				str[j] = 'G';
				j++;
			}
			
		}
	}
	cout << str;
	return 0;
}

