#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <string.h>
#include <map>
#include <functional>
#include <stdio.h>
using namespace std;
int n, m;
map <string, int> mapp;
map <string, int> mapp1;
int arr1[1000005];
bool first = true;
bool second = false;
string arr[1000005];
bool NO = false;
int main(){
	cin >> n >> m;
	int saven = n;
	int savem = m;
	for (int i = 0; i < n + m; i++){
		string s;
	    cin >> s;
		mapp[s] += 1;
		arr[i] = s;
	}
	for (int i = 0; i < n + m; i++){
		if (mapp1[arr[i]] != 1){
			arr1[i] = mapp[arr[i]];
			mapp1[arr[i]] = 1;
		}
	}
	sort(arr1, arr1 + n + m,std::greater<int>());
	for (int i = 0; i < mapp.size(); i++){
		if (first && arr1[i] == 1){
			if (saven>0){
				saven -= 1;
				first = false;
				second = true;
				continue;
			}
			else {
				cout << "NO" << endl;
				NO = true;
				break;
			}
		}
		if (second && arr1[i] == 1){
			if (savem>0){
				savem -= 1;
				first = true;
				second = false;
				continue;
			}
			else {
				break;
			}
		}
		if (first == true && arr1[i]==2){
			if (saven > 0){
				saven -= 1;
				savem -= 1;
				first = false;
				second = true;
				continue;
			}
			else {
				cout << "NO" << endl;
				NO = true;
				break;
			}
		}
		if (second == true && arr1[i] == 2){
			if (savem > 0){
				saven -= 1;
				savem -= 1;
				first = true;
				second = false;
				continue;
			}
			else {
				break;
			}
		}
	}
	if (first && saven == 0 && !NO){
		cout << "NO" << endl;
	}
	else if (!NO){
		cout << "YES" << endl;
	}
	return 0;
}