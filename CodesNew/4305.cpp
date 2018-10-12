#include<iostream>
#include<string>

using namespace std;
const int maxn = 500000;

int arr[maxn];
string str[maxn];
int n;

void input(){
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> str[i];
	}
}

void solve(){
	for(int i = n - 2; i >= 0; i --){
		for(int j = 0; j < str[i].size(); j ++){
			if(str[i][j] > str[i + 1][j]){
				str[i][j] = '0' ;
				break;
			}
			else if(str[i][j] < str[i + 1][j]) break;
		}
	}
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < str[i].size(); j ++){
			if(str[i][j] == '0'){
				break;
			}
			else cout << str[i][j];
		}
		cout << endl;
	}

}

int main(){
	input();
	solve();
}


