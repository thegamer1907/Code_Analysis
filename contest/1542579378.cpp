#include <bits/stdc++.h>
using namespace std;

int t1, t2;
double a[3];
bool f[3][2];

int main(){
	for(int i=0; i < 3; i++){
		f[i][0] = true; 
		f[i][1] = true;
	}
	
	cin >> a[0] >> a[1] >> a[2];
	cin >> t1 >> t2;
	
	a[1] = a[1] + (double)a[2]/(double)60;
	a[0] = a[0] + (double)a[1]/(double)60;
	
	a[1] = 12 * ((double)a[1]/(double)60);
	a[2] = 12 * ((double)a[2]/(double)60);
	
	for(int i=0; i < 3; i++){
		if(t1 == t2){
		}if(t1 > t2){
			if(a[i] > t2 && a[i] < t1)f[i][1] = false;
			if(a[i] > t1 || a[i] < t2)f[i][0] = false;
		}else{
			if(a[i] > t1 && a[i] < t2)f[i][1] = false;
			if(a[i] > t2 || a[i] < t1)f[i][0] = false;
		}
	}
	
	bool ans1=true, ans2=true;
	for(int i=0; i < 3; i++){
		ans1 = ans1 && f[i][0];
		ans2 = ans2 && f[i][1];
	}
	
	if(ans1 || ans2)
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}

