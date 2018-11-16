#include <iostream>
using namespace std;
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a;
	int L;
	cin>>a;
	L=a.size();
	int r=L/2;
	int x[r],y[r];
	int xsh=0,ysh=0,test=0;
	for (int i=0;i<L;i++){
		if (a[i]=='A' && a[i+1]=='B'){
			x[xsh]=i+1;
			xsh++;
		}
		if (a[i]=='B' && a[i+1]=='A'){
			y[ysh]=i+1;
			ysh++;
		}
		if (xsh>1 && ysh>1){
			break;
		}
}
	for (int i=0;i<xsh;i++){
		for (int j=0;j<ysh;j++){
			if (abs(x[i]-y[j])>1){
				if (test==0){
				
				cout<<"YES";
				test=1;
			}
			}
}
}
	if (test==0){
		cout<<"NO";
	}	
}