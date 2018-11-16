#include <iostream>
#include <stdio.h>
//#include <bits/c++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
  //  ios_base::sync_with_stdio(false);
	string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i< s.length()-1 ; i++) {
        if (s[i] == s[i+1]) {count ++;}
        else {count = 0;}
        if (count == 6) {cout << "YES" ; return 0;}
    }
	cout<<"NO";
}
