#include <iostream>

using namespace std;

int main() {
	string s;
	int m,vetor[200001];
	cin >> s;
	cin >> m;
	if(s[0]==s[1]) vetor[0] =1;
	else vetor[0] =0;
	for(int i=1;i< (s.size()-1) ;i++) {
	    if(s[i]==s[i+1]) vetor[i]  = vetor[i-1]+ 1; 
	    else vetor[i] = vetor[i-1];
	}
	for(int i=0;i<m;i++){
	    int l,r;
	    cin >> l >> r;
	    r--;
	    l--;
	    if(l>0)cout << vetor[r-1]-vetor[l-1] << endl;
	    else cout << vetor[r-1]  << endl;
	}
}
