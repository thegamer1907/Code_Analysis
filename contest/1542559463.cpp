//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#define l(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;



int main() {


	string pas;
	int n;
	string arr[n];
	cin >> pas >> n;
	string s2 = "";
	l(i,n){
		cin >> arr[i];
		if(arr[i] == pas){
			cout << "YES";
			return 0;
		}
	}
	if(n == 1 && arr[0] == pas){
		cout << "YES";
		return 0;
	}
	int index1 = -1;
	int index2 = -1;
	l(i,n){
		if(arr[i][1] == pas[0])
			index1 = i;
		if(arr[i][0] == pas[1])
			index2 = i;
	}
	if(index1 != -1 && index2 != -1)
		cout << "YES";
	else cout << "NO";

	return 0;
}
