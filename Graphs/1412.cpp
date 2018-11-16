#include <iostream>

using namespace std;

int n;
int a[100000];

bool check(int x){
	for(int i=0; i<=n; i++){
		if(a[i]==x){
			return true;
		}
	}
	return false;
}

int main(){
	int b[100000];
    int des;
    int pos=1;
    int por=1;

//input
    cin >> n >> des;
    for(int i=1; i<n; i++){
    	cin >> b[i];
	}
	
//processing
	a[0]=1;
	for(int i=0; pos<n; pos+=b[por]){
		a[i]=pos;
		i++;
		por=pos;
	}
	a[por]=pos;
	
//output
    if(check(des)==true){
    	cout << "YES";
    	return 0;
	}
	else{
		cout << "NO";
		return 0;
	}
}
