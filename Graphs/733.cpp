#include <bits/stdc++.h>
using namespace std;

int main() {
	int size, turn;
	cin >> size >> turn;

	string que;
	cin >> que;

	string arr[size];
	
	for(int a = 0; a < que.size(); a++){
		arr[a] = que[a];	
	}

	for(int a = 0; a < turn; a++){
		for(int b = 0; b < que.size() - 1;){
			if(arr[b]=="B" && arr[b+1]=="G"){
				arr[b] = "G";
				arr[b+1] = "B";
				b+=2;
			}
			else b++;
		}
	}
	string str = "";
	for(int a = 0; a < que.size(); a++){
		str = str+arr[a]+"";
	}
	cout << str << endl;
	return 0;
}