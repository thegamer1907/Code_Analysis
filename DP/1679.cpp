#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; 
	cin >> s;
	int la,lb,ra,rb;
	la = lb = ra = rb = -1;
	la = lb = -2;
	for(int i=0; i<s.size()-1; i++) {
		if(s.substr(i,2)=="AB") la=i;
		else if(s.substr(i,2)=="BA") lb = i;
	}
	for(int i=s.size()-2; i>=0; i--) {
		if(s.substr(i,2)=="AB") ra=i;
		else if(s.substr(i,2)=="BA") rb = i;
	}

	// cout << la << " " << rb << endl;
	// cout << lb << " " << ra << endl;

	if(la<0 || lb<0 || abs(la-rb)==1 && abs(lb-ra)==1) cout << "NO";
	else cout << "YES";

}