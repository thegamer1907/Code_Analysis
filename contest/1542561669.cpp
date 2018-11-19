#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	bool pos = false;
	string p,a[200];
	cin>>p>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<n;i++) {
		for(int k=0;k<n; k++) {
			if((a[i]+a[k]).find(p)!=string::npos){
			    pos = true;	
			}
		}
	}
	if (pos)
	    cout << "YES";
    else 
        cout << "NO";
}