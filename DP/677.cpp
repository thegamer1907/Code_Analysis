#include <bits/stdc++.h>
using namespace std;


int n = 100000;
int fen[100002];

void update (int pos, int val) {
	for (int i = pos; i <= n; i+= i&-i) fen[i] += val;
}

int query (int pos) {
	int r = 0;
	for (int i = pos; i>0 ; i -= i&-i) r += fen[i];
	return r;
}



int main() {
	string h;
	int l,r,q;
	cin>> h;
	cin>>q;


	for(int i = 1 ; i <h.size(); i++){
		if(h[i] == h[i-1]) update(i, 1);

	}

	for(int i = 0 ; i < q; i++){
		cin>>l>>r;
		cout<<query(r-1) - query(l-1)<<endl;

	}














}