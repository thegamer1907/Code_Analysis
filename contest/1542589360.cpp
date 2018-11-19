#include <bits/stdc++.h>

using namespace std;



int main(int argc, char *argv[]) {

	int h, m, s;
	int t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	vector<int> T(24);
	h%=12;
	t1%=12;
	t2%=12;
	if(s%5 == 0){
		T[2*(s/5)] = 1;
	}else{
		T[2*(s/5)+1] = 1;
	}
	if(s==0 && m % 5 == 0){
		T[2*(m/5)] = 1;
	}else{
		T[2*(m/5)+1] = 1;
	}
	if(s==0 && m==0){
		T[2*h] = 1;
	}else{
		T[2*h+1] = 1;
	}
	for (int i = 0; i < 24; ++i) {
		if(T[(2*t1+i)%24])break;
		if(i%2==1)continue;
		if((t1+i/2)%12==t2){
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i = 0; i < 24; ++i) {
		if(T[(2*t1-i+24)%24])break;
		if(i%2==1)continue;
		if(t1==(t2+i/2)%12){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
