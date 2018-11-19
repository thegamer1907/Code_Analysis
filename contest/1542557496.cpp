#include <iostream>

using namespace std;

int main(){

	char pass[3];
	char sa[3];
	int n;

	cin>>pass;
	bool head_ok = false, tail_ok = false;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>sa;
		if(sa[0] == pass[1]) tail_ok = true;
		if(sa[1] == pass[0]) head_ok = true;
		if(sa[0] == pass[0] && sa[1] == pass[1]){
            tail_ok = true;
            head_ok = true;
		}
	}

	if(head_ok && tail_ok)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
