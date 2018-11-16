#include<iostream>

using namespace std;

int main(void){
	string s;
	cin >> s;
	int i=0,l,r,q;
	int A[100005]={0};
	while(s[i+1]){
		if(s[i]==s[i+1])
			A[i+1] = A[i] +1;
		else
			A[i+1]=A[i];
	
		++i;
	}
	cin >> q;
	
	/*for(i=0;i<s.length();++i)
		cout << A[i] << " ";
	cout << endl;
	*/
	while(q--){
		cin >> l >> r;
		cout << A[r-1] -A[l-1] << endl;
		
		
	
	
	
	
	
	}


	return 0;
}