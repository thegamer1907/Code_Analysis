/*
 * BarkToUnlock.cpp
 *
 *  Created on: 05-Oct-2017
 *      Author: shivang
 */
#include<iostream>
#include<string>
using namespace std;
int main() {
	string pass;
	cin>>pass;
	int n;
	cin>>n;
	string opt[100];
	for(int i=0;i<n;i++) {
		cin>>opt[i];
		if(pass.compare(opt[i])==0) {
			cout<<"YES";
			return 0;
		}
	}
	for(int i=0;i<n;i++) {
		if(opt[i][0]==pass[1]) {
			for(int j=0;j<n;j++) {
				if(opt[j][1]==pass[0]) {
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}



