#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int flag[N + 5];

int main() {
	int arr[5],d;
	for(int i = 0;i < 4;i++) cin>>arr[i];
	cin>>d;
	int tot = 0;
	for(int i = 0;i < 4;i++) {
		for(int j = 0;j <= d;j += arr[i]) {
			if(flag[j] == 0) tot++;
			flag[j] = 1;
		}
	}
	cout<<tot - 1<<endl;
}
